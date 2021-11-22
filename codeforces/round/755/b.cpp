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
ll func(ll r, ll c){
	ll ans =0;
	if(c==1 && (r==1||r==2)){ans += 1;}
    	else if(c==2 && (r==1||r==2)){ans += r;}
    	else{
    		ll a = r/3;
    		ll rem = r%3;
    		ans += a*c;
    		if(rem >= 1){
    			if(c==1){ ans += 1;}
    			else if(c==2){ans += rem;}
    		}
    	}
    	return ans;
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    while(t--){
    	ll r,c;cin>>r>>c;
    

    ll ans = 0;
    if(c<=2){
    	ans += func(r,c);

    }
   	else{
   		ll a = c/3;
   		ll rem = c%3;
   		ans += a*r;
   		if(rem >= 1){
   			ans += func(r,rem);
   		}

   	}
   	cout<<ans<<endl;
   
   
}
}
