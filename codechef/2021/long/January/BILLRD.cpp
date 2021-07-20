#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pii pair<ll,ll>
#define ff first
#define ss second

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
	ll t;cin>>t;
	
	while(t--){
		ll n,k,x,y;cin>>n>>k>>x>>y;
		pii temp1,temp2,temp3,temp4;
		if(x==y){
			cout<<n<<" "<<n<<endl;
			continue;
		}
		else if(x<y){
			 temp1.ff = x-y+n;
			 temp1.ss = n;
			 temp2.ff = n;
			 temp2.ss = temp1.ff+temp1.ss -n;
			 temp3.ff = temp2.ff-temp2.ss+0;
			 temp3.ss = 0;
			 temp4.ff = 0;
			 temp4.ss = temp3.ff+temp3.ss-0;

		}
		else {
			temp1.ff = n;
			temp1.ss = y-x+n;
			temp2.ff = temp1.ff+temp1.ss-n;
			temp2.ss = n;
			temp3.ff = 0;
			temp3.ss = temp2.ss-temp2.ff+0;
			temp4.ff = temp3.ff+temp3.ss-0;
			temp4.ss = 0;
		}
		if(k%4==0){
			cout<<temp4.ff<<" "<<temp4.ss<<endl;
		}
		else if(k%4==1){
			cout<<temp1.ff<<" "<<temp1.ss<<endl;
		}
		else if(k%4==2){
			cout<<temp2.ff<<" "<<temp2.ss<<endl;
		}
		else{
			cout<<temp3.ff<<" "<<temp3.ss<<endl;
		}

	}
}
