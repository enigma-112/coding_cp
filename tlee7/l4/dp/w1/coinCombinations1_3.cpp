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

// Tabulation
// dp[i] = no. of ways to make sum i

int32_t main(){
	customio();
	FIO;
	
	int n, sum; cin>>n>>sum;
	vector<int> coins(n);
	for(int i = 0; i <= n - 1; i++) {
		cin>>coins[i];
	}

	vector<int> dp(sum + 1, 0);
	dp[0] = 1;

	for(int i = 1; i <= sum; i++) {
		for(int j = 0; j <= (int)coins.size() - 1; j++) {
			if(coins[j] > i) {
				continue;
			}
			dp[i] += dp[i - coins[j]];
			dp[i] %= mod;
		}
	}
	
	cout<<dp[sum];

	return 0;
}