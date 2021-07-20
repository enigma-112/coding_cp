#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define mod 1000000007

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    while(t--){
    	ll n,m;cin>>n>>m;
    	ll temp = 0;
    	ll arr[n+1];
    	for(ll i=0;i<=n;i++){
    		arr[i]=1;
    	}
    	for(ll i=2;i<=n;i++){
    		ll x = m%i;
    		temp += arr[x];
    		for(ll j=x;j<=n; j+=i){
    			arr[j]++;
    		}
    	}
    	cout<<temp<<endl;
    }
   
   
   
}
