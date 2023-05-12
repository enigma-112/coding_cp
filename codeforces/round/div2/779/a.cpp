#include <bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define ll 				long long int
#define pb 				push_back
#define mp 				make_pair
#define endl 			"\n"
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	customio();
	FIO;
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		string s;cin>>s;
		ll ans = 0;
		ll i=0,j=0;
		while(j<=n-1){
			if(s[j]=='0'){
				i=j;
				break;
			}
			j++;
		}
		j++;
		while(j<=n-1){
			if(s[j]=='0'){
				ll temp = j-i-1;
				if(temp < 2){
					ans += 2-temp;
				}
				i=j;
			}
			j++;
		}

		cout<<ans<<endl;
	}
   
   
}

