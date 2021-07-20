#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 998244353
void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}
ll  power(ll x, ll y){ 
    ll res = 1;     
 
    x = x % mod; 
    if (x == 0) return 0;
 
    while (y > 0){ 
        
        if (y & 1) {
            res = (res*x) % mod; 
        }
     
        y = y>>1; 
        x = (x*x) % mod; 
    } 
    return res; 
} 
ll fact(ll n){
	ll ans = 1;
	for(ll i=2;i<=n;i++){
		ans = (ans*i)%mod;
	}
	return ans%mod;
}
ll nCr(ll n,ll r){
	return (fact(n)%mod/((fact(n-r)%mod*fact(r)%mod)%mod))%mod;
}

int main(){
	fastio();
	ll n;cin>>n;
	ll arr[n];
	ll arr_temp[31]={0};
	for(ll i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	for(ll i=0;i<=n-1;i++){
		for(ll j=30;j>=0;j--){
			if(arr[i]&(1LL<<j)){
				arr_temp[j]++;
			}
		}
	}
	ll q;cin>>q;
	while(q--){

		ll x;cin>>x;
		ll ans = 0;
		for(ll j=1;j<=x;j++){
			for(ll k=1;k<=j;k+=2){
				for(ll temp=0;temp<=30;temp++){
					ll onecount = arr_temp[temp];
					ll zerocount = n-arr_temp[temp];
					ll t1 = nCr(onecount,k)%mod;
					ll t2 = nCr(zerocount,j-k)%mod;
					ll t3 = (ll)pow((long double)2,(long double)temp)%mod;
					ans = (ans + ((t1*t2*t3)%mod)%mod);
					ans = ans%mod;


		}
		}
		
		
		
	}
	cout<<ans<<endl;
}

}