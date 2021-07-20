#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
	ll t;
	ll cnt=0;
	cin>>t;
	while(t--){
		cnt++;
		ll n,k;
		cin>>n>>k;

		vector<ll> v1;
		for(int i=0;i<=n-1;i++){
			ll x;
			cin>>x;
			v1.push_back(x);
		}
	//	sort(v1.begin(),v1.end());

		vector<ll> v2;
		for(int i=1;i<=n-1;i++){
			v2.push_back(v1[i]-v1[i-1]);
		}
		sort(v2.begin(),v2.end(),greater<ll>());
		while(k--){
			ll x = v2[0];
			if(x%2==0){
				v2.push_back(x/2);
				v2.push_back(x/2);
			}
			else{
				v2.push_back(x/2);
				v2.push_back((x/2)+1);
			}
			v2[0]=INT_MIN;

			sort(v2.begin(),v2.end(),greater<ll>());
		}

		if(v2[0]%2==0){
			cout<<"Case #"<<cnt<<": "<<v2[0]<<endl;

		}
		else{
			cout<<"Case #"<<cnt<<": "<<v2[0]<<endl;

		}

	}

}
