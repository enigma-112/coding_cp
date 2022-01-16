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

ll find(ll arr[], ll n, ll dp[], ll x){
	if(x == 0){return 0;}
	if(x < 0){return INT_MAX;}
	if(dp[x] != -1){return dp[x];}
	ll ans = INT_MAX;
	for(ll i=0; i<=n-1; i++){
		ans = min(ans,1+find(arr,n,dp,x-arr[i]));
	}
	
	dp[x] = ans;
	return dp[x];
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n,x;cin>>n>>x;
    ll arr[n];
    for(ll i=0;i<=n-1;i++){
    	cin>>arr[i];
    }

    ll dp[x+1];
    for(ll i=0;i<=x;i++){dp[i] = -1;}
    ll ans = find(arr,n,dp,x);
	if(ans == INT_MAX){
		cout<<-1;
	}
    else{
    	cout<<ans;
    }

   
}

