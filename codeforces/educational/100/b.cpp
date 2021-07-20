#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){

		ll n;cin>>n;
		ll arr[n];
		ll ans[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		ll sum_even = 0, sum_odd = 0,sum=0;
		for(ll i=0;i<=n-1;i++){
			if(i%2==0){
				sum_odd += arr[i];
			}
			else{
				sum_even += arr[i];
			}
			sum += arr[i];
		}

		if(2*sum_odd <= sum){  // ans[n] = {1,a2,1,a4,1,a6,........} 
			for(ll i=0;i<=n-1;i++){
				if(i%2==0){
					ans[i]=1;
				}
				else{
					ans[i]=arr[i];
				}
			}
		}
		else{				  // ans[n] = {a1,1,a3,1,a5,1,.....}
			for(ll i=0;i<=n-1;i++){
				if(i%2==0){
					ans[i]=arr[i];
				}
				else{
					ans[i]=1;
				}
			}
		}

		for(ll i=0;i<=n-1;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;

	}

}