#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define pb push_back
#define mk make_pair
#define pii pair<ll,ll> 
#define vi vector<ll> 
#define endl '\n'
void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);


    #ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}
void find_ans(vector<vector<ll>> &g, ll i, ll parent, vector<bool> & visited, vector<ll> & ans, ll psum,ll plen){
	visited[i] = true;
	plen++;
	if(g[i].size()==1 && g[i][0]==parent){
		if((psum +1)%plen==0){
			ans[i]=2;
		}
		return ;
	}

	ans[i]=1;
	psum++;
	for(ll j=0;j<=(ll)g[j].size()-1;j++){
		if(!visited[g[i][j]]){
			find_ans(g,g[i][j],i,visited,ans,psum,plen);
		}
	}
}
int main(){
	
	fastio();
	ll t;
	cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<vector<ll>> g(n);
		for(ll i=0;i<=n-1;i++){
			ll x,y;
			cin>>x>>y;
			x--;
			y--;
			g[x].pb(y);
			g[y].pb(x);
		}
		vector<bool> visited(n,false);
		vector<ll> ans(n,-1);
		find_ans(g,0,-1,visited,ans,0,0);
		for(ll i=0;i<=n-1;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
}