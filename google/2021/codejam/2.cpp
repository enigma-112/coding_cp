#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}



int main(){
	fastio();
	ll t;cin>>t;
	ll cnt=0;
	while(t--){
		cnt++;
		ll x,y;
		string s;
		cin>>x>>y>>s;
		ll n = (ll)s.length();

		ll dp[2][n];
		for(ll i=0;i<=n-1;i++){
			dp[0][i]=0;
			dp[1][i]=0;
		}
		// for(ll i=0;i<=n-1;i++){
		// 	cout<<dp[0][i]<<" ,"<<dp[1][i]<<endl;
		// }
		for(ll i=1;i<=n-1;i++){
			if(s[i]=='C'){
				if(s[i-1]=='C'){
					dp[0][i] += dp[0][i-1];
					dp[1][i] += dp[1][i-1];
				}
				else if(s[i-1]=='J'){
					dp[0][i] += (dp[0][i-1] + y);
					dp[1][i] += (dp[1][i-1] + y);
				}
				else {
					dp[0][i] += min(dp[0][i-1],dp[0][i-1] + y);
					dp[1][i] += min(dp[1][i-1],dp[1][i-1] + y);
				}
			}
			else if(s[i]=='J'){
				if(s[i-1]=='C'){
					dp[0][i] += (dp[0][i-1] +x);
					dp[1][i] += (dp[1][i-1] +x);
				}
				else if(s[i-1]=='J'){
					dp[0][i] += (dp[0][i-1]);
					dp[1][i] += (dp[1][i-1]);
				}
				else {
					dp[0][i] += min(dp[0][i-1] + x ,dp[0][i-1]);
					dp[1][i] += min(dp[1][i-1] + x, dp[1][i-1]);
				}
			}
			else if(s[i]=='?'){
				// s[i] == C
				if(s[i-1]=='C'){
					dp[0][i] += min(dp[0][i-1] +x,dp[0][i-1]);
					dp[1][i] += min(dp[1][i-1] +x,dp[1][i-1]);
				}
				else if(s[i-1]=='J'){
					dp[0][i] += min(dp[0][i-1],dp[0][i-1] + y);
					dp[1][i] += min(dp[1][i-1],dp[1][i-1] + y);
				}
				else {
					dp[0][i] += min(dp[0][i-1],min(dp[0][i-1]+y,dp[0][i-1]+x));
					dp[1][i] += min(dp[1][i-1],min(dp[1][i-1]+y,dp[1][i-1]+x));
				}

				// s[i] == J

			}

		}

		for(ll i=0;i<=n-1;i++){
			cout<<dp[0][i]<<" , "<<dp[1][i]<<endl;
		}
		ll ans  = min(dp[0][n-1],dp[1][n-1]);
		cout<<"Case #"<<cnt<<": "<<ans<<endl;
   }
   
}

