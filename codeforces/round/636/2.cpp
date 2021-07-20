#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

		ll term = n/2;
		if(term %2!=0){
			cout<<"NO"<<endl;
			continue;
		}

		cout<<"YES"<<endl;
		ll last_even = 2*term;
		ll sum_even = ((2+last_even)*term)/2;

		ll term_odd = term-1;
		ll last_odd = 1 + (term_odd-1)*2;

		ll sum_odd = ((1+last_odd)*term_odd)/2;

		ll final_term = sum_even - sum_odd;

		for(ll i=1,j=2;i<=term;i++){
			cout<<j<<" ";
			j+=2;
		}

		for(ll i=1,j=1;i<=term_odd;i++){
			cout<<j<<" ";
			j+=2;
		}
		cout<<final_term<<endl;


	}


}