#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		string arr[n];
		set<string> s1;
		ll freq[256]={0};
	
		for(ll i=0;i<=n-1;i++){
			string x;cin>>x;
			freq[x[0]]++;
			s1.insert(x);
		}

		// for(ll i=97;i<=122;i++){
		// 	if(freq[i]>=1){
		// 		cout<<char(i)<<" ";
		// 	}
		// }
		// cout<<endl;
		set<string> s2;
		ll freq2[256]={0};
		for(auto i : s1){
			for(ll j=97;j<=122;j++){
				if(freq[j]>=1){
					char x = char(j);
					if(i[0]!=x){
						string temp = (string)"" + char(j) + i.substr(1);
						//cout<<"Finding String : "<<temp<<endl;
						if(s1.find(temp) == s1.end() && s2.find(temp)==s2.end()){
							s2.insert(temp);
							freq2[temp[0]]++;
						}
					}
				}
			}
		}

		// for(ll i=97;i<=122;i++){
		// 	if(freq2[i]>=2){
		// 		cout<<char(i)<<" ";

		// 	}
		// }
	//	cout<<endl;
		ll temp = s2.size();
		ll ans = temp*(temp-1);

		for(ll i=97;i<=122;i++){
			if(freq2[i]>=2){
				ll x = (freq2[i])*(freq2[i]-1);
				ans -= x;
			}
		}
		cout<<ans<<endl;
		
	}

}