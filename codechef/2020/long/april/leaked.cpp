#include<bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){

	ll t;
	cin>>t;
	while(t--){
		ll n,m,k;
		cin>>n>>m>>k;
		ll arr[n][k];

		for(int i=0;i<=n-1;i++){
			for(int j=0;j<=k-1;j++){
				cin>>arr[i][j];
			}
		}


		for(int i=0;i<=n-1;i++){
			unordered_map<int,int> m1;
			for(int j=0;j<=k-1;j++){
				m1[arr[i][j]]++;
			}

			ll x,y=-1;
			for(auto i : m1){
				if(i.second>y){
					x=i.first;
					y=i.second;
				}
			}
			cout<<x<<endl;
		}
	}
}