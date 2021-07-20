#pragma GCC optimize("Ofast", "unroll-loops")
#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define double long double
using pii = pair<int, int>;
template <typename T>
using Prior = std::priority_queue<T, vector<T>, greater<T>>;

#define X first
#define Y second
#define eb emplace_back
#define ALL(x) begin(x), end(x)
#define RALL(x) rbegin(x), rend(x)
#define fastIO() ios_base::sync_with_stdio, cin.tie(0)

mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());

inline int getRand(int L, int R)
{
    if (L > R)
        swap(L, R);
    return (int)(rng() % (uint64_t)(R - L + 1) + L);
}
template <typename T1, typename T2>
ostream &operator<<(ostream &os, pair<T1, T2> p)
{
    os << "(" << p.first << "," << p.second << ")";
    return os;
}

template <typename T>
ostream &operator<<(ostream &os, vector<T> vec)
{
    for (int i = 0; i < vec.size(); ++i)
    {
        if (i)
            os << " ";
    }
    return os;
}


class triplet {
    public:
        int n1,s1,x1; // n1:node no., s1:subtree size, x1:value assigned
};

int subtr[300001]={};
// bool compare(int &a, int &b){
//      return subtr[a] > subtr[b];
// }
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
// void dfs2(vector<ll> g[], ll cur, ll par, ll &ans, ll x){
//     ans = (ans + x)%mod;
//  //   cout<<"node : " <<cur<<" val : " <<x<<endl;
//     vector<ll> v1;
//     for(ll i : g[cur]){
//         if(i==par){continue;}
//         v1.pb(i);
//     }
//     sort(v1.begin(),v1.end(),compare);
//     ll cnt = 1;
//     for(ll i : v1){
//         dfs2(g,i,cur,ans,cnt*x);
//         cnt++;
//     }
// }
const int maxn = 3E5 + 5;
const int mod = 1E9 + 7;

vector<int> adj[maxn], subval, val;
vector<pii> ch;

void dfs(int now, int lst = -1)
{
    for (auto x : adj[now])
    {
        if (x == lst)
            continue;
        dfs(x, now);
    }
    ch.clear();
    for (auto x : adj[now])
    {
        if (x != lst)
            ch.eb(subval[x], x);
    }
    sort(RALL(ch));

    int tok = 1;
    for (auto [_val, id] : ch)
        val[id] = tok++;
    for (auto x : adj[now])
    {
        if (x != lst)
            subval[now] += val[x] * subval[x];
    }
}

void solve()
{
    int N, X;
    cin >> N >> X;
    subval.assign(N, 1), val.assign(N, 0);
    for (int i = 0; i < N; ++i)
        vector<int>().swap(adj[i]);

    for (int i = 0; i < N - 1; ++i)
    {
        int u, v;
        cin >> u >> v, --u, --v;
        adj[u].eb(v), adj[v].eb(u);
    }

    dfs(0);

    cout << subval[0] % mod * X % mod << endl;
}
void fastio(){
    #ifndef ONLINE_JUDGE    
    freopen("E:/coding_cp/input.txt","r",stdin);
    freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}
int main()
{
    fastio();
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    for (int _ = 1; _ <= t; ++_)
    {
        solve();
    }
    return 0;
}