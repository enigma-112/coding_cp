#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int> 


void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    #ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}



int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		if(n==1){
			ll x;cin>>x;cout<<x<<endl;continue;
		}
		vi v1;

		for(ll i=0;i<=n-1;i++){
			ll x;cin>>x;
			v1.pb(x);
		}
		sort(v1.begin(),v1.end(),greater<int>());

		int a = v1[0];
		int b = v1[1];

		ll ans = 0;
		for(ll j=2;j<=n-1;j++){
			if(a<=b){
				ans+=a;
				b-=a;
				a=v1[j];
			}
			else{
				ans+=b;
				a-=b;
				b=v1[j];
			}
		}

		ans += max(a,b);
		cout<<ans<<endl;



	}
	
   
}

