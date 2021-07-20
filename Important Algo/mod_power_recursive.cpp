#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define pii pair<int,int> 

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

ll mod_power(ll a,ll b,ll c){ // return (a^b)%c
	if(b==0){return 1;}
	ll temp = mod_power(a,b/2,c);
	ll ans;
	if(b%2==0){
		ans = (temp*temp)%c;
	}
	else{
		// ll x = (temp*temp)%c;
		// a = a%c;
		// ans = (a*x)%c;
		
		ans =  ((a%c)*((temp*temp)%c))%c;
	}

	return (ans+c)%c;
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll a,b,c;cin>>a>>b>>c;
	ll ans = mod_power(a,b,c);
	cout<<ans<<endl;

}