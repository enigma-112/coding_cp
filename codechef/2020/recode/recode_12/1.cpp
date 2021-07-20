#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		map<ll,pair<ll,ll>> m1;

		for(ll i=0; i<=n-1;i++){
			if(m1.find(arr[i])==m1.end()){
				m1.insert({arr[i],make_pair(i,1ll)});
			}
			else{
				if(m1[arr[i]].first != (i-1)){
					m1[arr[i]].first = i;
					m1[arr[i]].second ++;
				}
			}
		}

		pair<ll,ll> ans ;
		ans.first = -1;
		ans.second = -1;
		for(auto x : m1){
			if((x.second.second) > ans.second){
				ans.first = x.first;
				ans.second = x.second.second;
			}
		}
		cout<<ans.first<<endl;

	}
}