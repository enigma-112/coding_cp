#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

 //    #ifndef ONLINE_JUDGE	
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
 //    #endif
}



ll find_ans(ll arr[],ll w,ll n, ll temp){

			ll sum = 0;
			for(ll i=0;i<=w-1;i++){
				if(arr[i]==temp){continue;}
				else if(arr[i] < temp){
					ll s1 = temp - arr[i];
					ll s2 = arr[i];
					s2 += (n-temp);
					ll x = min(s1,s2);
					sum += x;
				}
				else{
					ll s1 = arr[i]-temp;
					ll s2 = n-arr[i] + 1;
					s2 += (temp-1);
					ll x = min(s1,s2);
					sum += x;

				}
			}
			return sum;
		
}
int main(){
fastio();
	ll attempt = 0;
	ll t;cin>>t;
	while(t--){
		attempt++;
		ll w,n;
		cin>>w>>n;
		
		if(w==1){
			ll t1;cin>>t1;
			cout<<"Case #"<<attempt<<": "<<0<<endl;continue;
		}
		ll arr[w];
		for(ll i=0;i<=w-1;i++){
			cin>>arr[i];
		}

		
		
		ll temp_arr[4]={1,2,n,n-1};
		ll solve[4];

		for(ll i = 0 ;i<=3;i++){
			solve[i] =  find_ans(arr,w,n,temp_arr[i]);
		}

		ll ans1 ;		
		ans1 = min(solve[0],solve[1]);
		ans1 = min(solve[3],solve[4]);

		if(n==2){
			cout<<"Case #"<<attempt<<": "<<ans1<<endl;continue;
		}

		ll mini = INT_MAX;
		ll low = 2, high = n-1;

		ll ans = INT_MAX;
		while(low <= high){
			ll mid = (low+high)/2;
			if(find_ans(arr,w,n,mid) < find_ans(arr,w,n,mid+1) && find_ans(arr,w,n,mid) < find_ans(arr,w,n,mid-1)){
				ans = find_ans(arr,w,n,mid);
				break;
			}
			else if(find_ans(arr,w,n,mid) > find_ans(arr,w,n,mid+1)){
				ans = find_ans(arr,w,n,mid+1);
				low = mid+1;

			}
			else{
				ans = find_ans(arr,w,n,mid-1);
				high = mid-1;
			}

		}	
		ll final_ans = min(ans1,ans);
		cout<<"Case #"<<attempt<<": "<<final_ans<<endl;continue;
		
	}

}