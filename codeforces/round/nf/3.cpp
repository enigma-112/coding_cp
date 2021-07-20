#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==1){
			cout<<0<<endl;
			continue;
		}
		ll mid = n/2;
		ll ans =0;
		ll x =1;
		ll t = 1;
		while(1){
			ll temp = x*t;
			ans +=temp;
			x+=2;
			t+=1;
			if(t==mid+1){
				break;
			}
		}

		ans *=4;

		ll temp = ((mid*(mid+1))/2)*4;
		ans+=temp;
		cout<<ans<<endl;

	}


}