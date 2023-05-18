// https://codeforces.com/problemset/problem/1350/B

#include<bits/stdc++.h>
using namespace std;

#define ll 				long long int
#define mod             1000000007
#define inf             1e18
#define endl 			"\n"
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

// Tabulation
// similar to longest increasing subsequence
// similar to sieve of eratosthenes
// dp[i] = length of longest beautiful subsequence that ends at i
// our answer will be maximum value among dp[1], dp[2], dp[3] .... dp[n]
// T : O(nlogn) (According to properties of harmonic series)

int main(){
	customio();
	FIO;

	int t; cin>>t;
	while(t--) {
		int n; cin>>n;
		vector<int> arr(n+1);
		for(int i = 1; i <= n; i++) {
			cin>>arr[i];
		}
		vector<int> dp(n+1, 0);
		for(int i = 1; i <= n; i++) {
			dp[i] = 1;
		}

		for(int i = 1; i <= n; i++) {
			for(int j = i*2; j <= n; j += i) {
				if(arr[i] < arr[j]) {
					dp[j] = max(dp[j], dp[i] + 1);
				}
			}
		}

		int ans = 0;
		for(int i = 1; i <= n; i++) {
			ans = max(ans, dp[i]);
		}
		cout<<ans<<endl;

	}
	return 0;
}