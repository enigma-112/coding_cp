#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;

		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		sort(arr,arr+n);

		ll ans = INT_MAX;
		ll pos = -1;
		for(ll i=0;i<=n-1;i++){
			if(arr[i]>k){
				break;
			}
			if(k%arr[i]==0){
				ll temp = k/arr[i];
				if(ans > temp){
					ans = temp;
					pos = arr[i];
				}

			}
		}
		cout<<pos<<endl;
	}
}