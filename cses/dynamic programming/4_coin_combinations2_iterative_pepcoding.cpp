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
    ll m,sum;cin>>m>>sum; // m = size of coins array
    vector<ll> coins(m);
    for(ll i=0;i<=m-1;i++){
    	cin>>coins[i];
    }

    // iterative solution

    vector<ll> dp(sum+1, 0); // initialize dp array with 0
    dp[0] = 1;
    for(ll i=0; i<=m-1; i++){
    	for(ll j=coins[i]; j<=sum; j++){
    		dp[j] = (dp[j] + dp[j - coins[i]])%mod;
    	}
    }
	
	cout<<dp[sum];   
}

	