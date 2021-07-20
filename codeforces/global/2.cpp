#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){

ll n;
cin>>n;
ll arrb[n+1];
for(ll i=1;i<=n;i++){
	cin>>arrb[i];
}

	ll a1 = arrb[1];
	cout<<a1<<" ";
	ll x2 = a1;
	ll a2 = arrb[2]+x2;
	cout<<a2<<" ";


	 ll x_temp = max(x2,a2);
	 ll a_temp;


	for(int i=3;i<=n;i++){
			a_temp = arrb[i] + x_temp;
			cout<<a_temp<<" ";
			x_temp = max(x_temp,a_temp);

	}
	

}