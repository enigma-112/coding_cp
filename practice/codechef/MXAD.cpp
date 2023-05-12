#include<bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define ll 				long long int
#define pb 				push_back
#define mp 				make_pair
#define pii 			pair<ll,ll>
#define vi 				vector<ll>
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	FIO;
	customio();

	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<ll> v1(n);
		for(ll i=0;i<=n-1;i++){
			cin>>v1[i];
		}

		vector<ll> dp(n,0);
		dp[0] = max(0LL,v1[0]);
		dp[1] = max(dp[0], v1[1]);
		for(ll i=2; i<=n-1; i++){
			dp[i] = max(dp[i-1], v1[i] + dp[i-2]);

		}

		cout<<dp[n-1]<<endl;

	}
}



