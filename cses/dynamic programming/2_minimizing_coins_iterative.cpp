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
    ll coins[n];
    for(ll i=0;i<=n-1;i++){
    	cin>>coins[i];
    }

    ll dp[x+1];
    dp[0] = 0;
    for(ll i=1;i<=x;i++){
    	dp[i] = INT_MAX;
    	for(ll j=0;j<=n;j++){
    		if(coins[j]<=i){
    			dp[i] = min(dp[i], 1+dp[i-coins[j]]);
    		}
    	}
    }
	if(dp[x] == INT_MAX){
		cout<<-1;
	}
    else{
    	cout<<dp[x];
    }

   
}

