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
		ll n,k;
		cin>>n>>k;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}

		ll ans = 1;
		ll curr_sum =0;
		bool flag = false;
		for(ll i=0;i<=n-1;i++){
			if(arr[i] > k){
				cout<<-1<<endl;
				flag = true;
				break;
			}
			else{
				if(curr_sum + arr[i] > k){
					ans++ ;
					curr_sum = arr[i];
				}
				else{
					curr_sum += arr[i];
				}
			}
		}

		if(flag==true){
			continue;
		}
		cout<<ans<<endl;


	}
   
   
}

