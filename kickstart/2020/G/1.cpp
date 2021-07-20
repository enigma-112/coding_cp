#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);

    #ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}

//ll arr[100001];
int main(){
	fastio();
	ll attempt = 0;
	ll t;cin>>t;
	while(t--){
		attempt++;
		vector<int> kick;
		vector<int> start;
		string s;
		cin>>s;
		ll n= s.length();
		// for(ll i=0;i<=100000;i++){
		// 	arr[i]=0;
		// }

		if(n<=8){cout<<"Case #"<<attempt<<": "<<0<<endl;continue;}

		for(ll i=0;i<=n-4;i++){
			if(s[i+0]=='K'&&s[i+1]=='I'&&s[i+2]=='C'&&s[i+3]=='K'){
				kick.pb(i);
			}

		}
		for(ll i=0;i<=n-5;i++){
			if(s[i+0]=='S'&&s[i+1]=='T'&&s[i+2]=='A'&&s[i+3]=='R'&&s[i+4]=='T'){
				start.pb(i);
			}
		}
		ll ans = 0;
		sort(kick.begin(),kick.end());
		sort(start.begin(),start.end());
		for(ll i=0;i<=(ll)kick.size()-1;i++){
			vector<int>::iterator it ;
			it = lower_bound(start.begin(),start.end(),kick[i]);
			if(it==start.end()){
				continue;
			}
			else{
				ll x = it - start.begin();
				ans += ((start.size())-x);
			}
		}


		cout<<"Case #"<<attempt<<": "<<ans<<endl;

	}



   
 }