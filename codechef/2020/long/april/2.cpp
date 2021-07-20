#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define MOD 1000000007

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
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

		vector<int> v1(n);
		for(ll i=0;i<=n-1;i++){
			cin>>v1[i];
		}

		sort(v1.begin(),v1.end(),greater<int>());
		ll ans=0;
		ll dec = 0;
		for(int i=0;i<=n-1;i++){
			v1[i] += dec;
			if(v1[i]<=0){
				break;
			}
			else{
				ans = (ans + v1[i])%MOD;
			}
			dec -= 1;
		}

		cout<<ans<<endl;
	}
   
}

