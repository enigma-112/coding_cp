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
 
// Memoization (Suffix Array Solution)
// dp[i] = no. of ways to make sum i
 
int dp[1000001];

int solve(int i, int n) {
	if(i > n) {
		return 0;
	}
	if(i == n) {
		return 1;
	}
	if(dp[i] != -1) {
		return dp[i];
	}
	int cnt = 0;
	for(int j = 1; j <= 6; j++) {
		cnt += solve(i + j, n);
		cnt %= mod;
	}
	dp[i] = cnt;
	return dp[i];
}
int main(){
	customio();
	FIO;
	int n; cin>>n;
	for(int i = 0; i <= n; i++) {
		dp[i] = -1;
	}
	int ans = solve(0, n);
	cout<<ans;
 
	return 0;
}