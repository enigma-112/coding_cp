#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}

ll arr_sum[200002];
ll arr[200002];
int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n,q,m;cin>>n>>q>>m;
		for(ll i=0;i<=200001;i++){arr_sum[i]=0;}
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}
		for(ll i=0;i<=q-1;i++){
			ll l,r;cin>>l>>r;
			l--;
			r--;
			if(arr[l]>m){continue;}
			else if(arr[r]>=m){
				arr_sum[arr[l]]++;
			}
			else {
				arr_sum[arr[l]]++;
				arr_sum[arr[r]+1]--;
			}

		}
		for(ll i=1;i<=m;i++){
			arr_sum[i]+=arr_sum[i-1];
		}
		ll maxi = 0;
		for(ll i=0;i<=m;i++){
			maxi = max(arr_sum[i],maxi);
		}

		cout<<maxi<<endl;



	}

}