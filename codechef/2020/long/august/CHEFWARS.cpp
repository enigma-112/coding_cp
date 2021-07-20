#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define pb push_back
#define mod 1000000007

ll power(ll a,ll b){
	if(b==0){
		return 1;
	}

	ll temp = power(a,b/2);
	if(b%2==0){
		return temp*temp;
	}
	return a*temp*temp;
}
int main(){


	ll t;cin>>t;
	while(t--){
		ll p,h;
		cin>>h>>p;
		if(p>=h){
			cout<<1<<endl;
			continue;
		}

		ll i = log2l((long double)p);
		i++;
		//cout<<"i : "<<i<<endl;
		ll x = power(2,i+1);
		ll y = x/2;

		if(h*y <= p*(x-1)){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}



	}

}