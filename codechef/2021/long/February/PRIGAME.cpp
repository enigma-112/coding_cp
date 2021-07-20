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

ll arr[1000001];

void sieve(){
	for(ll i=0;i<=1000000;i++){
		arr[i] = 1;
	}

	arr[0]=0;
	arr[1]=0; 
	for(ll i=2;i*i<=1000000;i++){
		if(arr[i]==1){
			for(ll j=i*i;j<=1000000;j+=i){
				arr[j] = 0;
			}

		}
	}
	for(ll i = 2;i<=1000000;i++){
		arr[i] += arr[i-1];
	}
}

int main(){
	fastio();
	sieve();

	ll t;cin>>t;
	while(t--){
		ll x,y;
		cin>>x>>y;
		if(arr[x]<=y){
			cout<<"Chef"<<endl;	
		}
		else{
			cout<<"Divyam"<<endl;
		}
	}

}