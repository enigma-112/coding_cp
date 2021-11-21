
// Method : Memoization
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int dp[4001];

ll find_ans(ll n,ll a,ll b,ll c){
	if(n==0){return 0;}
	if(n<0){return INT_MIN;}
	if(dp[n]!=-1){return dp[n];}
	dp[n] = 1 + max(find_ans(n-a,a,b,c),max(find_ans(n-b,a,b,c),find_ans(n-c,a,b,c)));

	return dp[n];
}
int main(){
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	for(ll i=0;i<=n;i++){
		dp[i]=-1;
	}
	ll ans = find_ans(n,a,b,c);
	cout<<ans<<endl;
}
