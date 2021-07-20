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
		ll w,n;
		cin>>w>>n;
		
		if(w==1){
			ll t1;cin>>t1;
			cout<<"Case #"<<attempt<<": "<<0<<endl;continue;
		}
		ll arr[w];
		for(ll i=0;i<=w-1;i++){
			cin>>arr[i];
		}

		ll mini = INT_MAX;
		for(ll temp = 1;temp<=n;temp++){
			ll sum = 0;
			for(ll i=0;i<=w-1;i++){
				if(arr[i]==temp){continue;}
				else if(arr[i] < temp){
					ll s1 = temp - arr[i];
					ll s2 = arr[i];
					s2 += (n-temp);
					ll x = min(s1,s2);
					sum += x;
				}
				else{
					ll s1 = arr[i]-temp;
					ll s2 = n-arr[i] + 1;
					s2 += (temp-1);
					ll x = min(s1,s2);
					sum += x;

				}
			}
			mini = min(mini, sum);
		}

		cout<<"Case #"<<attempt<<": "<<mini<<endl;continue;
		
	}

}