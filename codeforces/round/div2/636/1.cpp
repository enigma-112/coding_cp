#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

		ll k=2;
		while(1){
			ll x = pow(2,k);
		    x--;

		    if(n%x==0){
		    	cout<<n/x<<endl;
		    	break;
		    }
		    k++;
		}

	}

}