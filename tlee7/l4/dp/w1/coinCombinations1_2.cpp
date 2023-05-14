// https://cses.fi/problemset/task/1635/

#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define mod             1000000007
#define inf             1e18
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

// Memoization (Suffix Array Solution)
// dp[i] = no. of ways to make sum i

int solve(int i, int sum, vector<int>& coins, vector<int>& dp) {
	if(i > sum) {
		return 0;
	}
	if(i == sum) {
		return 1;
	}
	if(dp[i] != -1) {
		return dp[i];
	} 
	int ways = 0;
	for(int j = 0; j <= (int)coins.size() - 1; j++) {
		ways += solve(i + coins[j], sum, coins, dp);
		ways %= mod;
	}
	return dp[i] = ways;
}

int32_t main(){
	customio();
	FIO;
	
	int n, sum; cin>>n>>sum;
	vector<int> coins(n);
	for(int i = 0; i <= n - 1; i++) {
		cin>>coins[i];
	}

	vector<int> dp(sum + 1);
	for(int i = 0; i <= sum; i++) {
		dp[i] = -1;
	}

	int ans = solve(0, sum, coins, dp);
	cout<<ans;
	return 0;
}