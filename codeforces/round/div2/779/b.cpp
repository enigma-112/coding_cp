#include <bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define ll 				long long int
#define pb 				push_back
#define mp 				make_pair
#define endl 			"\n"
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

ll mod = 998244353 ;
int main(){
	customio();
	FIO;
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		if(n & 1){
			cout<<0<<endl;
			continue;
		}
		ll temp = 1;
		for(ll i=1; i<=n/2; i++){
			temp = (temp*i)%mod;
		}

		ll ans = (temp*temp)%mod;
		cout<<ans<<endl;
	}
   
   
}

