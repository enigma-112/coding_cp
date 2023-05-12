#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}



int main(){
	fastio();

	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n<=30){
			cout<<"NO"<<endl;
			continue;
		}

		cout<<"YES"<<endl;
		cout<<6<<" "<<10<<" "<<14<<" "<<n-30<<endl;
	}
   
   
}

