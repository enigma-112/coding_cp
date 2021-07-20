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
		ll x,k;
		cin>>x>>k;

		if(x==1){
			cout<<0<<endl;
			continue;
		}
		
		
		ll cnt = 0;
		for(ll i=2;i*i<=x;i++){
			if(x%i==0){
				while(x%i==0){
					cnt++;
					x=x/i;
				}
			}
		}

		if(x >=2){
			cnt++;

		}
		
		if(cnt>=k){
			cout<<1<<endl;
		}
		else{
			cout<<0<<endl;
		}
}

}