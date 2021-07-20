#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007


int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		if(n<=1){
			cout<<0<<endl;
			continue;
		}
		unordered_map<ll,ll> m1;
		for(int i=0;i<=n-1;i++){
			m1[arr[i]]++;
		}

		ll maxi = INT_MIN;

		ll cnt =0;
		for(auto x : m1){

			cnt++;
			maxi = max(maxi,x.second);
		}
 //cout<<"size " <<cnt<<endl;
		if(maxi == 1){
			cout<<1<<endl;
			continue;
		}

		if(maxi > cnt){
			cout<<cnt<<endl;
			continue;
		}

		if(maxi == cnt){
			cout<<maxi-1<<endl;
			continue;
		}

		if(maxi < cnt){
			cout<<maxi<<endl;
		}

}
}