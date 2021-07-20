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

int main(){
	//fastio();
	ll t;cin>>t;
    while(t--)
    {
        ll n,q,m;cin>>n>>q>>m;
        ll arr[n];
        for(ll i=0;i<=n-1;i++){
            cin>>arr[i];
        }
        ll b[1000002] = {0};
        map<pair<ll,ll>,ll>m1;
        while(q--){
            ll l,r;cin>>l>>r;
            l--,r--;
            if(arr[l]>m){
                continue;
            }
            else if(arr[l]<=m && arr[r]>m){
                b[arr[l]]++;
                b[m+1]--;
            }
            else if(arr[r]<=m){
                b[arr[l]]++;
                b[m+1]--;
                m1[{arr[l],arr[r]}]++;
            }
        }
        for(auto i:m1)
        {
            ll temp = i.first.first;
            ll x = i.first.second;
            ll l = i.second;
            b[x+temp] -= l;
            b[x+2*temp] += l;
            ll t = x + 2*temp;
            while(t+x <= m)
            {
                t += x;
                b[t] -= l;
                b[t+temp] += l;
                t += temp;
            } 
        }   
        ll maxi = 0;
        for(ll i=1;i<=m;i++){
            b[i] += b[i-1];
            maxi = max(maxi,b[i]);
        }
        cout<<maxi<<endl;
    }
   
}