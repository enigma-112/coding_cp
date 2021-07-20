// https://codeforces.com/contest/1463

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
		ll a,b,c;
		cin>>a>>b>>c;
		ll sum = a+b+c;
		ll rem = sum%9;
		ll temp = sum/9;
		bool flag= false;
		//cout<<sum<<" "<<rem<<" "<<temp<<endl;
		if(sum>=9 && rem%9==0){
			if(a>=temp && b>=temp && c>=temp){
				cout<<"yes"<<endl;
				flag= true;
			}

		}
		if(flag==false){
			cout<<"no"<<endl;
		}


	}
}