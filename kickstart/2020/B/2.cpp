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
	ll cs = 0;
	ll t;
	cin>>t;
	while(t--){
		cs++;
		ll n,a,b,c;
		cin>>n>>a>>b>>c;
		ll extraL = a-c;
		ll extraR = b-c;

		if(n>=2 && a==1 && b==1){
			cout<<"Case #"<<cs<<": "<<"IMPOSSIBLE"<<endl;
		 	continue;
		}
		if(c>a || c>b ){
			cout<<"Case #"<<cs<<": "<<"IMPOSSIBLE"<<endl;
		 	continue;
		}
		 if(extraL+extraR +c > n ){
		 	cout<<"Case #"<<cs<<": "<<"IMPOSSIBLE"<<endl;
		 	continue;
		 }
		if(a==b && a==n && c<n){
			cout<<"Case #"<<cs<<": "<<"IMPOSSIBLE"<<endl;
		 	continue;
		}

		if(n==1){
			cout<<"Case #"<<cs<<": "<<1<<endl;
			continue;
		}
			ll arr[n];
		
		
		for(ll i=0;i<=n-1;i++){
			arr[i]=INT_MAX;
		}

		ll i =0;
		for(;i<=extraL-1;i++){
			//cout<<"done"<<endl;
			arr[i]=n-1;
		}
		ll cnt = 0;
		for(;cnt<c;i++){
			arr[i]=n;
			//cout<<arr[i]<<" ";
			//cout<<"HI"<<endl;
			cnt++;
		}
		cnt = 0;
		for(i=n-1;cnt<extraR;i--){
			arr[i]=n-1;
			cnt++;
		}
		for(ll i=0;i<=n-1;i++){
			if(arr[i]==INT_MAX){
			//	cout<<"whati"<<endl;
				arr[i]=n-2;
			}
		}
		cout<<"Case #"<<cs<<": ";
		for(ll i=0;i<=n-1;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;
	
		
		

	}




   
   
}
