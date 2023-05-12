// https://cses.fi/problemset/task/1633

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
// dp[i] = no. of ways to make sum i

int main(){
	customio();
	FIO;
	int n; cin>>n;

	int dp[n+1] = {0};

	dp[0] = 1; // one way, don't throw dice at all

	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= 6; j++) {
			if(j > i) {
				break;
			}
			dp[i] += dp[i-j];
			dp[i] %= mod;
		}
	}

	cout<<dp[n];
 
	return 0;
}