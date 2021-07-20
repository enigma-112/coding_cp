#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void input(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}
int main(){
	input();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll n,x;
	string s;
	
	cin>>n>>x>>s;
	ll ans = x;
	for(ll i=0;i<=n-1;i++){
		if(s[i]=='o'){
			ans++;
		}
		else{
			if(ans!=0){
				ans--;
			}
		}
	}
	cout<<ans<<endl;


}


