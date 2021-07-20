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

		string x;
		for(int i=0;i<=n-1;i++){
			x+='1';
			x+='0';
			x+='0';
			x+='1';
		}

		int temp =1;
		int i=x.length()-1;
		while(temp<=n){
			x[i]='0';
			i--;
			temp++;
		}
		
		ll ans = 0;
		for(int i=0;i<=x.length()-1;i +=4){
			ll temp = 0;
			ll t1=3;
			for(int j=0;j<=3;j++){
				if(x[i+j]=='1'){
					temp |= (1LL<<t1);
				}
				t1--;
			}
			ans = ans*10 + temp;
		}
		

		cout<<ans<<endl;
	}
   
   
}

