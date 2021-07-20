// https://www.codechef.com/MAY20B/problems/COVID19

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		int mini = INT_MAX;
		int maxi = INT_MIN;

		int cnt =1;
		for(int i=1;i<=n-1;i++){
			if((arr[i]-arr[i-1]) <=2){
				cnt++;
			}
			else{
				mini = min(mini,cnt);
				maxi = max(maxi,cnt);
				cnt = 1;
			}
		} 

		mini = min(mini,cnt);
		maxi = max(maxi,cnt);
		cout<<mini<<" "<<maxi<<endl;
	}
}