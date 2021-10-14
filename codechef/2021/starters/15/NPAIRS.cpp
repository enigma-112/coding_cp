#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;
    while(t--){
    	ll n;cin>>n;
    	ll cnt = 0;
    	string s;cin>>s;
    	for(ll i=0;i<=n-1;i++){
    		for(ll j=i+1;j<=n-1 && j<=i+9;j++){
    			if((j-i) == abs(s[j]-s[i])){
    				cnt++;
    			}
    		}
    	}
    	cout<<cnt<<endl;
    }
    
   
   
}

