#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){

		string s;
		cin>>s;
		int n = s.length();
		if(n<=2){
			cout<<"YES"<<endl;
			continue;
		}
		string t = s.substr(2);
		t += s[0];
		t += s[1];

		if(s==t){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}

}