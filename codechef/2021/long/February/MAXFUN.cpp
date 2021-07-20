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

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}
		sort(arr,arr+n);
		ll ans = 0;
		ll sum1 = abs(arr[n-1]-arr[0]);
		ll m1 = 0;
		for(ll i=1;i<=n-2;i++){
			m1 = max(m1,abs(arr[i]-arr[0])+abs(arr[n-1]-arr[i]));
		}
		cout<<sum1+m1<<endl;

	}
}