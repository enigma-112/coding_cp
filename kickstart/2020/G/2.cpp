#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

 //    #ifndef ONLINE_JUDGE	
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
 //    #endif
}



int main(){
fastio();
	ll attempt = 0;
	ll t;cin>>t;
	while(t--){
		attempt++;
		ll n;cin>>n;
		if(n==1){
			ll t1;cin>>t1;
			cout<<"Case #"<<attempt<<": "<<t1<<endl;continue;

		}
		ll arr[n][n];
		for(ll i=0;i<=n-1;i++){
			for(ll j=0;j<=n-1;j++){
				cin>>arr[i][j];
			}
		}
		ll maxi = 0;
		for(ll k=0;k<=n-1;k++){
			ll sum = 0;
			ll i=0,j=k;
			while(i<=n-1&&j<=n-1){
				sum += arr[i][j];
				i++;
				j++;
			}
			maxi = max(maxi,sum);
		}
		for(ll k=1;k<=n-1;k++){
			ll sum = 0;
			ll i=k,j=0;
			while(i<=n-1&&j<=n-1){
				sum += arr[i][j];
				i++;
				j++;
			}
			maxi = max(maxi,sum);
		}




		cout<<"Case #"<<attempt<<": "<<maxi<<endl;continue;


	}

}
   
   