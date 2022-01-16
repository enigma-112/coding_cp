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

ll findAns(vector<ll> &coins, ll n, vector<ll> &dp, ll x){
	if(x==0){return 1;}  // no. of ways : take no coins at all
	if(x<0){return 0;}
	if(dp[x] != -1){return dp[x];}
	ll ans = 0;
	for(ll i=0;i<=n-1;i++){
		ans = (ans + findAns(coins, n, dp, x-coins[i]))%mod	; // in this solution {1,2} and {2,1} are considered different
	}
	dp[x] = ans;
	return dp[x];

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

    vector<ll> dp(x+1,-1);
    ll ans = findAns(coins, n, dp, x);
    cout<<ans;
   
}

