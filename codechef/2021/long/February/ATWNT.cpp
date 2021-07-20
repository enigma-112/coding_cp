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

ll fun(vector<vector<ll>> & g, ll i,ll p,ll w){
	if(g[i].size()==1){return 0;}
	ll c = g[i].size() -1;
	if(w%c!=0){
		return w;
	}
	ll tempans  = 0;
	ll temptask = w/c;
	for(ll j=0;j<=(ll)g[i].size()-1;j++){
		if(g[i][j]!=p){
			tempans += (fun(g,g[i][j],i,temptask));

		}
	}

	return tempans;

}
int main(){
	fastio();
	ll n;cin>>n;
	vector<vector<ll>> g(n+1);
	vector<ll> parent(n+1);
	parent[1]=0;
	for(ll i=1;i<=n-1;i++){
		ll x;cin>>x;
		g[x].pb(i+1);
		g[i+1].pb(x);
		parent[i+1] = x;
	}
	g[1].pb(0);
	ll q;cin>>q;
	for(ll i=0;i<=q-1;i++){
		ll v,w;cin>>v>>w;
		ll ans = fun(g, v, parent[v],w);
		cout<<ans<<endl;
	}

	
}