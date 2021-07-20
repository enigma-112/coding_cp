#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

ll sum_submatrix(vector<vector<ll>>& arr, ll n ,ll m, ll tli, ll tlj, ll bri, ll brj){
	if(tli==0 && tlj==0){
		return arr[bri][brj];
	}

	ll ans = arr[bri][brj];
	if(tli!=0){
		ans -= arr[tli-1][brj];
	}
	if(tlj!=0){
		ans -= arr[bri][tlj-1];
	}
	if(tli!=0 && tlj!=0){
		ans += arr[tli-1][tlj-1];
	}

	return ans;

}
ll find_ans(vector<vector<ll>> &arr, ll n, ll m, ll i, ll j,ll k){
	ll low_len = 1;
	ll high_len = min(n-i,m-j);
	ll ans = 0;
	while(low_len<=high_len){
		ll mid = (low_len+high_len)/2;
		ll tempi = i+mid-1;
		ll tempj = j+mid-1;
		ll sum = sum_submatrix(arr,n,m,i,j,tempi,tempj);
		ll sz = mid*mid;
		if((sum/sz)<k){
			low_len = mid+1;
		}
		else{
			ans = mid;
			high_len = mid-1;
		}
	}
	return ans;
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    while(t--){
    	ll n,m,k;cin>>n>>m>>k;
    	vector<vector<ll>> arr(n,vector<ll>(m));
    	for(ll i=0;i<=n-1;i++){
    		for(ll j=0;j<=m-1;j++){
    			cin>>arr[i][j];
    		}
    	}

    	//preprocessing : row prefix sum, then col prefix sum
    	for(ll i=0;i<=n-1;i++){
    		for(ll j=1;j<=m-1;j++){
    			arr[i][j]+=arr[i][j-1];
    		}
    	} 
    	for(ll j=0;j<=m-1;j++){
    		for(ll i=1;i<=n-1;i++){
    			arr[i][j]+=arr[i-1][j];
    		}
    	}

    	// binary search considering each array element as top left of the square submatrix
    	ll ans =0;
    	for(ll i=0;i<=n-1;i++){
    		for(ll j=0;j<=m-1;j++){
    			ll high_len = min(n-i,m-j);
    			ll temp = find_ans(arr,n,m,i,j,k);
    			if(temp!=0){
    				ans += (high_len-temp+1);
    			}
    		}
    	}
    	cout<<ans<<endl;

    }

   
   
}

