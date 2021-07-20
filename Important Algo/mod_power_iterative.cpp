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
	a = (a%c);	
	ll ans = 1;	
	if(a==0){return 0;}
	while(b>0){
		if(b&1){
			ans = (ans*a)%c;
		}
		b = (b>>1);
		a = (a*a)%c;
	}
	return ans ;


}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll a,b,c;cin>>a>>b>>c;
	ll ans = mod_power(a,b,c);
	cout<<ans<<endl;

}