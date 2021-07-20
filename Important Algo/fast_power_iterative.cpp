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

ll fast_power(ll a, ll b){
	ll ans = 1;
	while(b>0){
		if(b&1){
			ans = ans*a;
		}

		a=a*a;
		b=b>>1;
	}
	return ans;
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
	ll a,b;cin>>a>>b;
	ll ans = fast_power(a,b);
	cout<<ans<<endl;

}