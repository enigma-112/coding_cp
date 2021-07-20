#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}



int main(){
	fastio();
	ll t;cin>>t;
	ll cnt = 0;
	while(t--){
		cnt++;
		ll n;cin>>n;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		ll ans = 0;
		for(ll i=0;i<=n-2;i++){
			ll *t1 = min_element(arr+i,arr+n);
			ll x  = t1-arr;
			ans += (x-i+1);
			reverse(arr+i,arr+x+1);

		}
		cout<<"Case #"<<cnt<<": "<<ans<<endl;
	}

   
   
}

