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
    ll n;cin>>n;
    ll dp[n+1] = {0};
    dp[0]=1;  // one way, don't throw dice at all
    for(ll i=1;i<=n;i++){
    	for(ll j=1;j<=6;j++){
    		if(j>i){
    			break;
    		}
    		dp[i] = (dp[i] + dp[i-j])%mod;
    	}
    }
    cout<<dp[n];
   
}

