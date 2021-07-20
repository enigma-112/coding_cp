#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,a,b;
		cin>>n>>a>>b;

		string s;
		ll cnt=0;
		ll x = 97;
		for(int i=1;i<=b;i++){
			s += char(x);
			x++;
			cnt++;
		}

		ll y = a-b;
		ll temp = 0;
		while(s.length()<n){
			s+=s[temp];
			temp = (temp+1)%b;
		}

		cout<<s<<endl;
	}
}