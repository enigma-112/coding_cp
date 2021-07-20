#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define pii pair<int,int> 

void fastio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}
int main(){
	fastio();
	ll t;cin>>t;
	ll cnt = 0;
	while(t--){
		cnt++;
		ll n,k;cin>>n>>k;
		string s1;cin>>s1;
		ll old_k = 0;
		for(ll i=0,j=n-1;i<=j;i++,j--){
			if(s1[i]!=s1[j]){
				old_k++;
			}
		}

	cout<<"Case #"<<cnt<<": "<<abs(old_k-k)<<endl;
	}

}