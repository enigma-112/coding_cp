// https://cses.fi/problemset/task/1634

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
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
// dp[i] = minimum no. of coins required to make sum i

int solve(int i, int sum, vector<int> &coins, vector<int> &dp) {
	if(i > sum) {
		return INT_MAX;
	}
	if(i == sum) {
		return 0;
	}
	if(dp[i] != -1) {
		return dp[i];
	}
	int minWays = INT_MAX;
	for(int j = 0; j <= (int)coins.size() - 1; j++) {
		int temp = solve(i + coins[j], sum, coins, dp); // minWays if we select first coin as coins[i]
		if(temp != INT_MAX) {
			minWays = min(minWays, 1 + temp);
		}
	}

	return dp[i] = minWays;

}
int main(){
	customio();
	FIO;
	
	int n, sum; cin>>n>>sum;
	vector<int> coins(n);
	for(int i = 0; i <= n-1; i++) {
		cin>>coins[i];
	}
	vector<int> dp(sum+1);
	for(int i = 0; i <= sum; i++) {
		dp[i] = -1;
	}
	int ans = solve(0, sum, coins, dp);
	if(ans != INT_MAX) {
		cout<<ans;
	}
	else {
		cout<<-1;
	}


	return 0;
}