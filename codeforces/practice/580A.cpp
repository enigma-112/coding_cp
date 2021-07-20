#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int main(){
	ll n;
	cin>>n;
	ll arr[n];
	for(ll i=0;i<=n-1;i++){
		cin>>arr[i];
	}

	ll ans =1;
	ll curr_ans = 1;
	for(ll i=1;i<=n-1;i++){
		if(arr[i]>=arr[i-1]){
			curr_ans++;
		}
		else{
			curr_ans=1;
		}
		ans = max(ans,curr_ans);
		
	}
	cout<<ans<<endl;
}