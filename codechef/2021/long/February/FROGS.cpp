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

class p1{
	public:
		ll w,l,d;
};

bool compare(p1 &a, p1 &b){
	if(a.w < b.w){return true;}
	return false;
}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		p1 arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i].w;
			arr[i].d = i;
		}
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i].l;
		}

		sort(arr,arr+n,compare);
		// for(ll i=0;i<=n-1;i++){
		// 	cout<<arr[i].d<<" ";
		// }
		//cout<<endl;
		ll ans =0;
		for(ll i=1;i<=n-1;i++){
			for(ll j=0;j<=i-1;j++){
				if(arr[j].d >= arr[i].d){
					ll temp = arr[j].d - arr[i].d +1;
					if(arr[i].l >= temp){
						ans++;
						arr[i].d += arr[i].l;
					}
					else{
						ll x;
						if(temp%arr[i].l==0){
							x = temp/arr[i].l;
						}
						else{
							x = temp/arr[i].l +1;
						}
						arr[i].d += x*arr[i].l;
						ans += x;
					}
				}
			}
		}
		cout<<ans<<endl;


}

}