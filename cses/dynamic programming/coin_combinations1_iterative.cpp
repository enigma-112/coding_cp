#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007


void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,x;cin>>n>>x;
    vector<ll> coins(n);
    for(ll i=0;i<=n-1;i++){
    	cin>>coins[i];
    }

    vector<ll> dp(x+1);
    dp[0] = 1;
    for(ll i=1;i<=x;i++){
    	dp[i] = 0;
    	for(ll j=0;j<=n-1;j++){
    		if(coins[j]<=i){
    			dp[i] = (dp[i] + dp[i-coins[j]])%mod;
    		}
    	}
    }
    cout<<dp[x];
   
}

