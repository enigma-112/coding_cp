#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;




int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		if(n==1){
			cout<<-1<<endl;
			continue;
		}

		for(int i=0;i<=n-2;i++){
			cout<<3;
		}
		cout<<4<<endl;
	}
}