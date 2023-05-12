#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ll long long int

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

		ll ans =0;
		ll p1=INT_MIN,n1=INT_MIN;
		for(ll i=0;i<=n-1;){
			p1=INT_MIN,n1=INT_MIN;
			//cout<<"ans :"<<endl;
			if(arr[i]<0){
				while(i<=n-1 && arr[i]<0){
					n1= max(n1,arr[i]);
					i++;
				}
				//cout<<"negative : "<<n1<<endl;
				ans+=n1;
			}
			else{
				while(i<=n-1 && arr[i]>0){
					p1 = max(p1,arr[i]);
					i++;
				}
			//	cout<<"positive : "<<p1<<endl;
				ans+=p1;

			}


		}

		cout<<ans<<endl;

	}

}