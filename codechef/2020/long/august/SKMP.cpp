#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		//cout<<endl;
		sort(a.begin(),a.end());
		map<char,ll> m1;
		for(ll i =0; i<a.size();i++){
			m1[a[i]]++;
		}

		for(ll i=0;i<b.size();i++){
			m1[b[i]]--;
		}

		string ans;
		for(auto it:m1){

			if(it.first == b[0]){
				char second_char ;
				ll i =0;
				for(i=1;i<b.size();i++){
					if(b[i]!=b[i-1]){
						second_char = b[i];
						break;
					}
				}
				if(i==b.size() || second_char > it.first){
					ll t1 = it.second;
					while(t1--){
						ans += it.first;
					}
					for(auto x : b){
						ans+= x;
					}
				}
				else{
					for(auto x : b){
						ans+= x;
					}
					ll t1 = it.second;
					while(t1--){
						ans += it.first;
					}
				}				
			}
			else{

			ll t1 = it.second;
			while(t1--){
				ans += it.first;
			}
			}

					
			
		}

		cout<<ans<<endl;
	}
}