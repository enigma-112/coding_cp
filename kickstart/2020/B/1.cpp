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
	ll cs = 0;
	ll t;
	cin>>t;
	while(t--){
		cs++;

		ll n;cin>>n;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){cin>>arr[i];}

		ll ans = 2;
		ll prev_diff = arr[1]-arr[0];
		ll curr_ans = 2;
		ll curr_diff;
		for(ll i=2;i<=n-1;i++){
			curr_diff = arr[i]-arr[i-1];
			if(curr_diff == prev_diff){
				curr_ans++;
				ans = max(ans,curr_ans);
			}
			else{
				curr_ans = 2;

			}
			prev_diff = curr_diff;

		}

		cout<<"Case #"<<cs<<": "<<ans<<endl;

	}




   
   
}
