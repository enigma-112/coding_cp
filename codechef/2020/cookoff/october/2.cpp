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
		ll l,r;
		cin>>l>>r;
		if(l==1){
			cout<<-1<<endl;
			continue;
		}
		ll x = r-l;
		if (x>=l){
			cout<<-1<<endl;
			continue;
		}
		cout<<r<<endl;

	}
}