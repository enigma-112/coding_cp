#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define endl "\n"

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

bool compare(pair<ll,ll> & a, pair<ll,ll> & b){
    return a.ss>b.ss;
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;
    while(t--){
    	ll n,m;cin>>n>>m;

        vector<vector<ll>> g1(n);
        for(ll i=0;i<=m-1;i++){
            ll u,v;cin>>u>>v;
            u--,v--;
            g1[u].pb(v);
            g1[v].pb(u);
        }

         if(n==1){
            cout<<0<<endl;
            cout<<1<<endl;
            continue;
        }
        
        vector<ll> temp(n);
        vector<pair<ll,ll>> v1(n); // vertex no, and  size of it's neighbours
        for(ll i=0;i<=n-1;i++){
            v1[i] = {i,(ll)g1[i].size()};
        }
        sort(v1.begin(),v1.end(),compare);

        ll t = 0;
        for(ll i=0;i<=n-1;i++){
            ll x = v1[i].ff;
            temp[x] = t;
            t++;
        }

        ll ans=0;

        for(ll i=0;i<=n-1;i++){
            ll k = 0;
            for(ll j=0;j<=(ll)g1[i].size()-1;j++){
                if(temp[i] > temp[g1[i][j]]){
                    k++;
                }
            }
            ans = max(ans,k);
        }

        cout<<ans<<endl;
        for(ll i=0;i<=n-1;i++){
            cout<<temp[i]+1<<" ";
        }
        cout<<endl;

    }
   
   
}

