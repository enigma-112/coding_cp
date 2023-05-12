#include <bits/stdc++.h>
using namespace std;

#define ff              first
#define ss              second
#define ll 				long long int
#define pb 				push_back
#define mp 				make_pair
#define endl 			"\n"
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


void customio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

ll mod = 998244353 ;
int main(){
	customio();
	FIO;
	ll t;cin>>t;
	while(t--){
		ll n;cin>>n;
		vector<ll> arr(n);
		for(ll i=0; i<=n-1; i++){
			cin>>arr[i];
		}
		int cnt = count(arr.begin(), arr.end(), 1);
		if(cnt != 1){
			cout<<"no"<<endl;
			continue; 
		}

		int idx = find(arr.begin(), arr.end(), 1) - arr.begin();
		bool flag = true;
		rotate(arr.begin(), arr.begin()+idx, arr.end());
		for(ll i=1; i<=n-1; i++){
			if(arr[i]-arr[i-1] >1){
				flag = false;
				break;
			}
		}
		cout<<(flag?"yes":"no")<<endl;


	}
   
   
}

