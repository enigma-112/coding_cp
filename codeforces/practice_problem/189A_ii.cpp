// Method : Tabulation (Bottom to Top)

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int dp[4001];
int main(){
	ll n,a,b,c;
	cin>>n>>a>>b>>c;
	dp[0]=0;
	for(ll i=1;i<=n;i++){
		dp[i]=INT_MIN;
		if(a<=i){dp[i] = max(dp[i],1+dp[i-a]);}
		if(b<=i){dp[i] = max(dp[i],1+dp[i-b]);}
		if(c<=i){dp[i] = max(dp[i],1+dp[i-c]);}
	}
	cout<<dp[n]<<endl;
}