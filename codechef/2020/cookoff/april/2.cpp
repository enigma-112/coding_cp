#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define mod 1000000007
#define endl '\n'


ll power(ll a, ll b, ll c){  
    ll ans = 1;  
    a = a % c;   
    if (a == 0){
    	return 0;
    }  
    while (b > 0){  
       
        if (b & 1)  
            ans = (ans*a) % c;  
  
       
        b = b>>1; 
        a = (a*a) % c;  
    }  
    return ans;  
}  
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a;
		cin>>n>>a;

		ll p=a,ans=0;
		for( ll i=1,j=1;i<=n;i++){


			ll temp = power(a,j,mod);

			ans = (ans%mod +temp%mod)%mod;

			a = (a%mod*temp%mod)%mod;
			j+=2;

		}
		cout<<ans<<endl;
	}

}