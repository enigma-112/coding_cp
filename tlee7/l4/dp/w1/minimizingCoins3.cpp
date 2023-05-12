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

// Tabulation
// dp[i] = minimum no. of coins required to make sum i

int main(){
	customio();
	FIO;
	
	int n, sum; cin>>n>>sum;
	vector<int> coins(n);
	for(int i = 0; i <= n-1; i++) {
		cin>>coins[i];
	}
	vector<int> dp(sum+1);
	dp[0] = 0;
	for(int i = 1; i <= sum; i++) {
		dp[i] = INT_MAX;
		for(int j = 0; j <= (int)coins.size()-1; j++) {
			if(coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
				dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
			}
		} 
	}

	if(dp[sum] != INT_MAX) {
		cout<<dp[sum];
	}
	else {
		cout<<-1;
	}
	return 0;
}