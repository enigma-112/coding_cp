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


ll sum = 0;
ll cnt= 0;
void find_ans(vector<ll> v1, ll temp_sum){
	if(v1.size()==1){
		sum += v1[0];
		cnt++;
		return ;
	}
	for(ll i = 0;i<=v1.size()-2;i++){
		vector<ll> v;
		for(ll j=0;j<=v1.size()-1;j++){
			if(j==i){
				v.pb(v1[i]+v1[i+1]);
				j++;
				temp_sum += (v1[i]+v1[i+1]);
			}
			else{
				v.pb(v1[i]);
			}

		}
		find_ans(v,temp_sum);
	}
}
int main(){
fastio();
	ll attempt = 0;
	ll t;cin>>t;
	while(t--){
		attempt++;
		ll n;cin>>n;
		if(n==2){
			ll t1,t2;cin>>t1>>t2;
			long double ans  = (long double)(t1+t2)/(long double)2;
			cout<<"Case #"<<attempt<<": "<<ans<<endl;

			continue;

		}
		vector<ll> v1(n);
		for(ll i=0;i<=n-1;i++){
			cin>>v1[i];
		}


		ll temp_sum = 0;
		find_ans(v1,temp_sum);
		long double ans  = (long double)sum/(long double)cnt;
		cout<<"Case #"<<attempt<<": "<<ans<<endl;

	}

}