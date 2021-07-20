#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		string s;cin>>s;
		ll low = 1, high = 16;
		string ans;
		for(ll i=0;i<=s.length()-1;i++){
			ll mid = (low+high)/2;
			if(s[i]=='0'){				
				high = mid;
			}
			else{
				low = mid+1;
			}
			if(i%4==3){
				char temp = char('a' + low -1);
				ans += temp;
				low = 1, high = 16;
			}
		}
		cout<<ans<<endl;
	}
}