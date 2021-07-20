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
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	//fastio();

	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		ll arr[n];
		for(ll i=0;i<=n-1;i++){
			cin>>arr[i];
		}
		bool flag= true;
		for(ll i=0,j=n-1;i<j;i++,j--){
			if(arr[i]>arr[j]){
				flag = false;
			}
		}
		if(flag==true){
			cout<<"YES"<<endl;

		}
		else{
			cout<<"NO"<<endl;
		}
	}
   
   
}

