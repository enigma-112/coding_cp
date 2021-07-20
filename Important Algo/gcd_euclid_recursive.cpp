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

ll gcd_euclid(ll a,ll b){ 
	if(b==0){return a;}
	return gcd_euclid(b,a%b);
	
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll a,b;cin>>a>>b;
	ll ans = gcd_euclid(a,b);
	cout<<ans<<endl;

}