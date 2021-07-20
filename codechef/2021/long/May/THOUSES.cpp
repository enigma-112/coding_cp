#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mod 1000000007

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}
class triplet {
    public:
        ll n1,s1,x1; // n1:node no., s1:subtree size, x1:value assigned
};

ll subtr[300001]={};
bool compare(ll &a, ll &b){
     return subtr[a] > subtr[b];
}
// ll bfs(vector<ll> g[],ll cur, ll x, ll n){
    
//     vector<ll> par(n+1);
//     par[1]=0;
//     queue<triplet> q1;
//     triplet temp;
//     temp.n1 =  cur;
//     temp.s1 = subtr[cur];
//     temp.x1 = x;
//   ll  ans = (temp.x1)%mod;
//     q1.push(temp);
//     while(!q1.empty()){
//         ll cur_sz = q1.size();
//         vector<triplet> v1;
//         while(cur_sz--){
//             triplet temp = q1.front();
//             q1.pop();
//             v1.pb(temp);
//         }
//         sort(v1.begin(),v1.end(),compare);
//         cout<<endl<<"sorted vector based on subtree size :"<<endl;
//         for(auto t : v1){cout<<t.n1<<" , ";}
//             cout<<endl;
        
//         for(triplet k : v1){
//             ll cnt = 1;
//             for(ll i : g[k.n1]){
//                 if(i!=par[k.n1]){
//                     triplet t2 ;
//                     t2.n1 = i;
//                     t2.s1 = subtr[t2.n1];
//                     t2.x1 = cnt*(k.x1);
//                     cnt++;
//                     cout<<"node : "<<t2.n1<<", val : "<<t2.x1<<endl;
//                     ans = (ans+t2.x1%mod)%mod;
//                     q1.push(t2);
//                     par[i]=k.n1;
//                 }
//             }


//         }
//     }
// return ans;
// }
void dfs2(vector<ll> g[], ll cur, ll par, ll &ans, ll x){
    ans = (ans + x)%mod;
 //   cout<<"node : " <<cur<<" val : " <<x<<endl;
    vector<ll> v1;
    for(ll i : g[cur]){
        if(i==par){continue;}
        v1.pb(i);
    }
    sort(v1.begin(),v1.end(),compare);
    ll cnt = 1;
    for(ll i : v1){
        dfs2(g,i,cur,ans,cnt*x);
        cnt++;
    }
}
void dfs(vector<ll> g[],ll cur, ll par){
    
    subtr[cur] = 1;

    for(ll i : g[cur]){
        if(i==par){
            continue;
        }
        dfs(g,i,cur);
        subtr[cur] += subtr[i];
    }
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t;cin>>t;
    while(t--){
    	ll n,x;cin>>n>>x;
        vector<ll> g[n+1];
        for(ll i=0;i<=n-2;i++){
            ll u,v;cin>>u>>v;
            g[u].pb(v);
            g[v].pb(u);
        }
        for(ll i=0;i<=n;i++){
            subtr[i]=0;
        }

        dfs(g,1,0);
        ll ans=0;
        dfs2(g,1,0,ans,x);
        cout<<ans<<endl;
    }
   
   
   
}
