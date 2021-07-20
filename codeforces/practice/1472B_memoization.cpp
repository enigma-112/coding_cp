// https://codeforces.com/problemset/problem/1472/B
// Submission : https://codeforces.com/contest/1472/submission/106325690
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}

ll arr[100];
ll dp[101][201];

ll find_ans(ll n, ll sum){ // f(i) == ans if we consider first i elements of the input array

	if(sum==0){
		return 1;
	}
	if(n==0 || sum<0){
		return 0;
	}
	if(dp[n][sum]!=-1){return dp[n][sum];}
	dp[n][sum] = find_ans(n-1,sum)||find_ans(n-1,sum-arr[n-1]);

	return dp[n][sum];
}
int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll sum =0;
		
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum & 1){ // if total sum is odd
			cout<<"no"<<endl;
			continue;
		}
		sum = sum/2;
		for(ll i=0;i<=n;i++){
			for(ll j=0;j<=sum;j++){
				dp[i][j]=-1;
			}
		}

		ll ans = find_ans(n,sum);
		if(ans==1){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}



	}
}