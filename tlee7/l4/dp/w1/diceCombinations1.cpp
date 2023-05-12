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

// Memoization (Prefix Array Solution)
// dp[i] = no. of ways to make sum i

int dp[1000001];

int solve(int n) {
	if(n < 0) {
		return 0;
	}
	if(n == 0) {
		return 1;
	}
	if(dp[n] != -1) {
		return dp[n];
	}
	int cnt = 0;
	for(int i = 1; i <= 6; i++) {
		cnt += solve(n-i);
		cnt %= mod;
	}
	dp[n] = cnt;
	return dp[n];
}

int main(){
	customio();
	FIO;
	int n; cin>>n;
	for(int i = 0; i <= n; i++) {
		dp[i] = -1;
	}
	int ans = solve(n);
	cout<<ans;
 
	return 0;
}