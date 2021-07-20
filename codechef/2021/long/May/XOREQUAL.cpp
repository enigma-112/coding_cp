#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

ll modPower(ll a,ll b,ll c){ // return (a^b)%c
	a = (a%c);
	ll ans = 1;
	if(a==0){return 0;}
	while(b>0){
		if(b&1){
			ans = (ans*a)%c;
		}
		b = (b>>1);
		a = (a*a)%c;
	}
	return ans ;


}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    ll temp = modPower(2,mod-2,mod);
    while(t--){
    	ll n;cin>>n;
	    ll x = modPower(2,n,mod);
	    ll ans = (x*temp)%mod;
	   // ans = (ans + 1)%mod; // adding 1 for value 0
	    cout<<ans<<endl;
    }
   
   
   
}

