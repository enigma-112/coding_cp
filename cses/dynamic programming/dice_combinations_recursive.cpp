#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

ll find(ll dp[], ll n){
	if(n<=0){return 0;}
	if(n==1){return 1;}
	if(dp[n] != -1){return dp[n];}
	ll ans = 0;
	for(ll i=1; i<=6; i++){
		ans += find(dp, n-i);
		ans %= mod;
	}
	if(n<=6){
		ans += 1;
		ans %= mod;
	}
	dp[n] = ans;
	return dp[n];
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;cin>>n;
    ll dp[n+1];
    for(ll i=0;i<=n;i++){dp[i] = -1;}
    ll ans = find(dp,n);
    cout<<ans;
   
}

