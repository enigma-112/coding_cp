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

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    ll t;cin>>t;
    while(t--){
    	ll u,v;cin>>u>>v;
    	cout<<-1*u*u<<" "<<v*v<<endl;
    }

   
   
}

