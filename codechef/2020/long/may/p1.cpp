#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){

	ll t;
	cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		ll temp = x&y;
		if(temp!=0){
			cout<<1<<endl;

		}
		else{
			cout<<0<<endl;
		}
	}
}