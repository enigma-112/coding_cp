#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n<=2){
			cout<<0<<endl;
			continue;
		}

		ll t = (n/2)+1;

		ll ans = n-1 -t +1;
		cout<<ans<<endl;
	}
}