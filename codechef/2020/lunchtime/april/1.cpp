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
		bool flag = true;

		int arr[n];
		vector<vector<int>> v(k);

		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
 		}

 		for(int i=0;i<=k-1;i++){
 			int x=0;
 			for(int j=i;j<=n-1;j +=k){
 				v[i].push_back(arr[j]);
 				x++;
 			}
 		}

 		for(int i=0;i<=k-1;i++){
 			sort(v[i].begin(),v[i].end());
 		}

 		sort(arr,arr+n);
 		int x=0;
 		for(int j=0;j<=v[0].size()-1;j++){

 			for(int i=0;i<=k-1;i++){

 				if(j <= v[i].size()-1){

 					if(v[i][j]!=arr[x]){
 					flag=false;
 					break;
 				}
 				x++;
 				}
 			}
 			if(flag==false){
 				break;
 			}
 		}

 		if(flag==false){
 			cout<<"no"<<endl;
 		}
 		else{
 			cout<<"yes"<<endl;
 		}
	}
}