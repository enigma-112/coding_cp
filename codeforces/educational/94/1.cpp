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

	ll t;
	cin>>t;
	while(t--){
		ll n;cin>>n;
		string s1;cin>>s1;

		string ans;
		for(ll i=0;i<=n-1;i++){
			ans += '$';
		}
		for(ll i=0;i<=n-1;i++){
			ll k=i;
			for( ;k-i<=n-1;k++){
				if(ans[k-i]=='$'){
					ans[k-i]=s1[k];
					break;
				}
				else if(ans[k-1]==s1[k]){
					break;
				}
			}
		}
		for(ll i=0;i<=n-1;i++){
			if(ans[i]=='$'){
				ans[i]='0';
			}
		}
		cout<<ans<<endl;
	}
   
   
}

