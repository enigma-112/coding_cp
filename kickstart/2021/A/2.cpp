#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define pii pair<int,int> 

void fastio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

class obj{
public:
	ll l,r,u,d;
	obj(){
		l=0;
		r=0;
		u=0;
		d=0;
	}
};

ll fun(ll low, ll high, ll n){
	
	if(n<=3){
		return 0;
	}
	while(low<=high){
		ll mid = (low+high)/2;
		if(2*mid <= n && 2*(mid+1)>n){return mid;}
		else if(2*mid <= n){low = mid+1;}
		else{high = mid-1;}
	}

	// while(high/2 > n){
	// 	high  = high/2;
	// }

	// return high/2;
	return 0;
}
int main(){
	fastio();
	ll t;cin>>t;
	ll cnt = 0;
	while(t--){
		cnt++;
		ll r,c;cin>>r>>c;
		ll arr[r][c];
		for(ll i=0;i<=r-1;i++){
			for(ll j=0;j<=c-1;j++){
				cin>>arr[i][j];
			}
		}

		obj arr2[r][c];
		// for(ll i=0;i<=r-1;i++){
		// 	for(ll j=0;j<=c-1;j++){
		// 		cout<<arr2[i][j].l<<" ";
		// 		cout<<arr2[i][j].r<<" ";
		// 		cout<<arr2[i][j].u<<" ";
		// 		cout<<arr2[i][j].d<<" ";

		// 	}
		// 	cout<<endl;
		// }

		//up
		//arr2[0][0].u = arr[0][0];
		for(ll j=0;j<=c-1;j++){
			arr2[0][j].u = arr[0][j];
			for(ll i=1;i<=r-1;i++){
				if(arr[i][j]==1){
					arr2[i][j].u = 1;
					arr2[i][j].u += arr2[i-1][j].u; 
				}
				else{
					arr2[i][j].u = 0;
				}
			}
		}
		//down
		//arr2[r-1][0].d = arr[r-1][0];
		for(ll j=0;j<=c-1;j++){
			arr2[r-1][j].d = arr[r-1][j];
			for(ll i=r-2;i>=0;i--){
				if(arr[i][j]==1){
					arr2[i][j].d = 1;
					arr2[i][j].d += arr2[i+1][j].d; 
				}
				else{
					arr2[i][j].d = 0;
				}
			}
		}
		// left
		//arr2[0][0].l = arr[0][0];
		for(ll i=0;i<=r-1;i++){
			arr2[i][0].l = arr[i][0];
			for(ll j=1;j<=c-1;j++){
				if(arr[i][j]==1){
					arr2[i][j].l = 1;
					arr2[i][j].l += arr2[i][j-1].l; 
				}
				else{
					arr2[i][j].l = 0;
				}
			}
		}
		// right
		//arr2[0][0].l = arr[0][0];
		for(ll i=0;i<=r-1;i++){
			arr2[i][c-1].r = arr[i][c-1];
			for(ll j=c-2;j>=0;j--){
				if(arr[i][j]==1){
					arr2[i][j].r = 1;
					arr2[i][j].r += arr2[i][j+1].r; 
				}
				else{
					arr2[i][j].r = 0;
				}
			}
		}
		// 	for(ll i=0;i<=r-1;i++){
		// 	for(ll j=0;j<=c-1;j++){
		// 		cout<<arr2[i][j].l<<" ";
		// 		cout<<arr2[i][j].r<<" ";
		// 		cout<<arr2[i][j].u<<" ";
		// 		cout<<arr2[i][j].d<<" ";

		// 	}
		// 	cout<<endl;
		// }
		ll ans = 0;
		for(ll i=0;i<=r-1;i++){
			for(ll j=0;j<=c-1;j++){
				// up right
				if(arr2[i][j].u >=2 && arr2[i][j].r >=2){
					ll temp1 = fun(2,arr2[i][j].u , arr2[i][j].r); // considering smaller side as up
					ll temp2 = fun(2,arr2[i][j].r , arr2[i][j].u); // considering smaller side as right
				//	cout<<temp1<<" : "<<temp2<<endl;
					if(temp1!=0){temp1--;}
					if(temp2!=0){temp2--;}
					ans += temp1;
					ans += temp2;
				}
				// up left
				if(arr2[i][j].u >=2 && arr2[i][j].l >=2){
					ll temp1 = fun(2,arr2[i][j].u , arr2[i][j].l); // considering smaller side as up
					ll temp2 = fun(2,arr2[i][j].l , arr2[i][j].u); // considering smaller side as left
					if(temp1!=0){temp1--;}
					if(temp2!=0){temp2--;}
					ans += temp1;
					ans += temp2;
				}
				// down right
				if(arr2[i][j].d >=2 && arr2[i][j].r >=2){
					ll temp1 = fun(2,arr2[i][j].d , arr2[i][j].r); // considering smaller side as down
					ll temp2 = fun(2,arr2[i][j].r , arr2[i][j].d); // considering smaller side as right

					if(temp1!=0){temp1--;}
					if(temp2!=0){temp2--;}
					ans += temp1;
					ans += temp2;
				}

				// down left
				// up left
				if(arr2[i][j].d >=2 && arr2[i][j].l >=2){
					ll temp1 = fun(2,arr2[i][j].d , arr2[i][j].l); // considering smaller side as left
					ll temp2 = fun(2,arr2[i][j].l , arr2[i][j].d); // considering smaller side as down
					if(temp1!=0){temp1--;}
					if(temp2!=0){temp2--;}
					ans += temp1;
					ans += temp2;
				}
			}
		}

		cout<<"Case #"<<cnt<<": "<<ans<<endl;




















	}
}