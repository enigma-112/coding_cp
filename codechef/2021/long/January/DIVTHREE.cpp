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
	ll t;
	cin>>t;
	while(t--){
		ll n,k,d;
		cin>>n>>k>>d;
		//ll arr[n];
		ll sum = 0;
		for(int i=0;i<=n-1;i++){
			ll x;cin>>x;
			sum += x;
		}

		ll temp = sum/k;
		if(temp>d){
			cout<<d<<endl;
		}
		else{
			cout<<temp<<endl;
		}



	}
}