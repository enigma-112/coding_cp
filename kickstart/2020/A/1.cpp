#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	ll cnt =0;
	cin>>t;
	while(t--){
		cnt++;
		ll n,b;
		cin>>n>>b;
		ll arr[n];
		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		ll ans=0;
		sort(arr,arr+n);

		for(ll i=1;i<=n-1;i++){
			arr[i] +=arr[i-1];
		}

		// vector<ll> iterator::it;
		// it = upper_bound(arr.begin(),arr.end(),b);
		// int x = it - arr.begin();
		// if(it == arr.end()){
		// 	cout<<"Case #"<<count<<": "<<n<<endl;
		// 	continue;
		// }
		
		ll i=0;
		for(;i<=n-1;i++){
			if(arr[i]>b){
				break;
			}


		}

		cout<<"Case #"<<cnt<<": "<<i<<endl;





 

	}



}