#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
	ll t;
	cin>>t;
	while(t--){
		ll cfp ,rfp;
		cin>>cfp>>rfp;
		ll x,y;
		if(cfp%9 == 0){
			x = cfp/9;
		}
		else{
			x = (cfp/9) + 1;
		}
		if(rfp%9==0){
			y = rfp/9;
		}
		else{
			y = (rfp/9) + 1;
 		}

 		if(x<y){
 			cout<<0<<" "<<x<<endl;
 		}
 		else{
 			cout<<1<<" "<<y<<endl;
 		}
	}
}