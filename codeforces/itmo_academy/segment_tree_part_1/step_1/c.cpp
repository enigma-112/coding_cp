#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}


pair<ll,ll> merge(pair<ll,ll> a, pair<ll,ll> b){
	if(a.first<b.first){return a;}
    if(b.first<a.first){return b;}
	return {a.first, a.second+b.second};
}

void buildST(ll i, ll s, ll e, pair<ll,ll> segtree[], ll arr[]){
	if(s == e){
		segtree[i] = {arr[s],1};
		return;
	}
	ll mid = s + (e-s)/2; // (s+e)/2
	buildST(2*i, s, mid, segtree, arr);
	buildST(2*i+1, mid+1, e, segtree, arr);
	segtree[i] = merge(segtree[2*i], segtree[2*i+1]);
}

pair<ll,ll> queryST(ll i, ll s, ll e, ll qs, ll qe, pair<ll,ll> segtree[]){
	if(qs > e || qe < s){return {INT_MAX, 0};}
	if(s >= qs && e <= qe){return segtree[i];}

	ll mid = s + (e-s)/2;
	return merge(queryST(2*i, s, mid, qs, qe, segtree),queryST(2*i+1, mid+1, e, qs, qe, segtree));
}

void updateST(ll i, ll s, ll e, ll pos, ll val, pair<ll,ll> segtree[], ll arr[]){
	if(s == e){
		segtree[i] = {val,1};
		arr[s] = val;
		return;
	}
	ll mid = s + (e-s)/2;
	if(pos <= mid){updateST(2*i, s, mid, pos, val, segtree, arr);}
	else{updateST(2*i+1, mid+1, e, pos, val, segtree, arr);}

	segtree[i] = merge(segtree[2*i], segtree[2*i+1]);
}

int main(){
 	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,m;cin>>n>>m;
    ll arr[n];
    for(ll i=0;i<=n-1;i++){
    	cin>>arr[i];
    }  

   //ll segtree[4*n];
   // or ll segtree[2*t]; where t is the nearest power of 2 greater than or equal to n
    ll t = 1;
    while(t<n){t *= 2;}
    pair<ll,ll> segtree[2*t];

    buildST(1, 0, n-1, segtree, arr);

    while(m--){
    	ll a,b,c;cin>>a>>b>>c;
    	if(a==1){
    		updateST(1, 0, n-1, b, c, segtree, arr);
    	}
    	else{
    		pair<ll,ll> ans = queryST(1, 0, n-1, b, c-1, segtree);
    		cout<<ans.first<<" "<<ans.second<<endl;
    	}
    }
}

