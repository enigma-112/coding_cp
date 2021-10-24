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

bool compare(pair<ll,ll> &a, pair<ll,ll> &b){
    return a.ff < b.ff;
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;
    while(t--){
    	ll n;cin>>n;
        pair<ll,ll> arrB[n]; // value, idx

        for(ll i=0;i<=n-1;i++){
            cin>>arrB[i].ff;
            arrB[i].ss = i;
        }
        sort(arrB,arrB+n,compare);
       
        ll arrA[n];
        ll x = 0;
        for(ll i=0;i<=n-1;i++){
           ll val = arrB[i].ff;
           ll idx = arrB[i].ss;
           if(x<=val-1){
             arrA[idx] = val+x;
             x++;
           }
           else{
            arrA[idx] = 50;
           } 
        }

        for(ll i=0;i<=n-1;i++){
            cout<<arrA[i]<<" ";
        }
        cout<<endl;
    }
}