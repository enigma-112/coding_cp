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
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}



int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;
		cin>>n;
		pair<ll,ll> arr[n];
		for(ll i=0;i<=n-1;i++){
			int x,y;
			cin>>x>>y;
			arr[i].first = x;
			arr[i].second = y;
		} 


		ll ans = n;
		ll temp = n/2;
		while(temp >=3){
			ans += temp;
			temp = temp/2;
		}
		cout<<ans<<endl;

	}
   
   
}

