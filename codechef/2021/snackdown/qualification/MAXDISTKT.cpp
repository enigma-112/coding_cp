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

unordered_map<ll,ll> m1;
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;
    while(t--){
    	ll n;cin>>n;
        ll arrB[n];
        for(ll i=0;i<=n-1;i++){
            cin>>arrB[i];
        }
        m1.clear();
        ll arrA[n] = {-1};
        for(ll i=0;i<=n-1;i++){
            ll x = arrB[i] -1;
            for(ll j=x;j>=0; j--){
                if(m1.find(j)==m1.end()){
                    arrA[i]=j;
                    m1.insert({j,1});
                    break;
                }
            }
            if(arrA[i] == -1){
                arrA[i] = 1;
            }
            
        }

        for(ll i=0;i<=n-1;i++){
            cout<<arrA[i]<<" ";
        }
        cout<<endl;
    }
   
   
}

