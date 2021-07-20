// https://codeforces.com/problemset/problem/1472/B
// Submission : https://codeforces.com/contest/1472/submission/106331138
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
//ll dp[101][201];
ll dp[201]; // Using only one 1D array --> O(sum) space 

ll find_ans(ll n , ll sum){
	dp[0]=1;
	for(ll x=1;x<=sum;x++){dp[x]= 0;}

	for(ll i = 1;i<=n;i++){
		for(ll j=sum;j>=0;j--){
			if(arr[i-1] <= j){
				dp[j] = dp[j] || dp[j-arr[i-1]];
			}
			else{
				dp[j] = dp[j];
			}
		}
	}
	return dp[sum];
}
int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll sum = 0;
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
			sum += arr[i];
		}
		if(sum & 1){cout<<"no"<<endl; continue;}
		sum = sum/2;
		
		ll ans = find_ans(n,sum);
		ans==1 ? cout<<"yes"<<endl : cout<<"no"<<endl;



	}
}