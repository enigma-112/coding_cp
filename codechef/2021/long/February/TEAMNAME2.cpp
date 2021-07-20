#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}

ll commonCharCount(vector<char> & v1, vector<char> & v2){
	set<char> s1(v1.begin(),v1.end());
	ll cnt = 0;
	for(ll i=0;i<=v2.size()-1;i++){
		if(s1.find(v2[i])!=s1.end()){
			cnt++;
		}
	}
	return cnt;
}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		map<string,vector<char>> m1;
		for(ll i=0;i<=n-1;i++){
			string s1;cin>>s1;
			m1[s1.substr(1)].pb(s1[0]);
		}
		ll ans = 0;
		for(auto i : m1){
		  for(auto j: m1){
		  	ll x = commonCharCount(i.second,j.second);
		  	ans += (i.second.size()-x)*(j.second.size()-x);
		  }
		}
		
		cout<<ans<<endl;		
	}

}