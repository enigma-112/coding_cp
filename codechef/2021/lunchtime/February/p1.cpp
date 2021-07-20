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
	while(t--){
		ll n;cin>>n;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];

		}

		set<ll> s1;
		ll maxi,smaxi;
		for(ll i=0;i<=n-2;i++){
			maxi = max(arr[i],arr[i+1]);
			smaxi = min(arr[i],arr[i+1]);
			s1.insert(abs(maxi-smaxi));
			for(ll j=i+2;j<=n-1;j++){
				if(arr[j]>maxi){
					smaxi=maxi;
					maxi=arr[j];
					s1.insert(abs(maxi-smaxi));
				}
				else if(arr[j]>smaxi){
					smaxi = arr[j];
					s1.insert(abs(maxi-smaxi));
				}
			}
		}
		cout<<s1.size()<<endl;
	}
   
   
}

