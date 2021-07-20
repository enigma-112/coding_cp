#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		int arr1[n],arr2[n];
		for(int i=0;i<=n-1;i++){
			cin>>arr1[i];
		}

		for(int i=0;i<=n-1;i++){
			cin>>arr2[i];
		}

		sort(arr1,arr1+n);
		sort(arr2,arr2+n,greater<int>());
		
		for(int i=0;i<=k-1;i++){
			if(arr1[i]<arr2[i]){
				swap(arr1[i],arr2[i]);
			}
			else{
				break;
			}
		}

		ll sum = 0;
		for(int i=0;i<=n-1;i++){
			sum +=arr1[i];
		}

cout<<sum<<endl;

	}


}