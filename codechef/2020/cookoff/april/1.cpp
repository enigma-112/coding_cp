#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,q;
		cin>>n>>q;

		ll ans=0,p=0;
		while(q--){
			ll s,d;
			cin>>s>>d;
			ans += abs(p-s)+abs(d-s);
			p=d;
		}
		cout<<ans<<endl;
	}

}