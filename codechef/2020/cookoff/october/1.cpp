#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define mk make_pair
#define pii pair<ll,ll> 
#define vi vector<ll> 
#define endl '\n'
void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    //cout.tie(0);

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
		ll n;cin>>n;
		string s;cin>>s;
		bool flag = false;
		char x = s[n-1];
		for(ll i=0;i<=n-2;i++){
			if(s[i]==x){
				flag = true;
			}
		}
		if(flag == true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}

}