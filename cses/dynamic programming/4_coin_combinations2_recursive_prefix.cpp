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

ll findAns(vector<ll> &coins, ll m,ll i, ll sum, vector<vector<ll>> &dp){
	if(i == 0){return sum==0 ? 1 : 0;} // difference from suffix : if( i == 0) instead of if( i == m)
    if(sum == 0){return 1;} 
    if(sum<0){return 0;}
    if(dp[sum][i] != -1){return dp[sum][i];}
    dp[sum][i] = findAns(coins, m, i, sum-coins[i-1], dp) + findAns(coins, m, i-1, sum, dp);  // difference from suffix : sum - coins[i-1]
    return dp[sum][i];
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll m,sum;cin>>m>>sum;
    vector<ll> coins(m);
    for(ll i=0;i<=m-1;i++){
    	cin>>coins[i];
    }

    // recursive solution (suffixArray solution)
    vector<vector<ll>> dp(sum+1,vector<ll>(m+1, -1));
    ll ans = findAns(coins, m, m, sum, dp); // difference from suffix : (m,m) instead of (m,0)
    cout<<ans;
   
}

