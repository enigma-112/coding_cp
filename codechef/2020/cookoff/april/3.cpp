#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		string s,r;
		cin>>s>>r;
	
		ll n =s.length();

		ll ans=0;
		ll k=0;
		ll temp=0;
		for(ll i=0;i<=n-1;){
			if(s[i]==r[i]){
				
				while(i<=n-1 && s[i]==r[i]){
					i++;
				}
			}
			else{
				k++;
				while(i<=n-1 && s[i]!=r[i]){
					i++;
					temp++;
				}
			}

		}

		// cout<<"unmatched : "<<temp<<endl;
		// cout<<"steps : "<<k<<endl;

		ll ans1 = k*temp;
		ll ans2 = n;
		cout<<min(ans1,ans2)<<endl;
		




	}






}