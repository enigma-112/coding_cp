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
	ll t;cin>>t;
	while(t--){
		 ll n,m;cin>>n>>m;
		 ll arr1[n],arr2[m];
		 ll sum1=0,sum2=0;
		 priority_queue<ll,vector<ll>,greater<ll>> pq;
		 for(ll i=0;i<=n-1;i++){
		 	cin>>arr1[i];
		 	sum1 += arr1[i];
		 	pq.push(arr1[i]);
		 }
		 for(ll i=0;i<=m-1;i++){
		 	cin>>arr2[i];
		 	sum2 += arr2[i];
		 	if(pq.top() < arr2[i]){
		 		pq.pop();
		 		pq.push(arr2[i]);
		 	}
		 }

		 ll sumN = 0;
		 while(!pq.empty()){
		 	sumN += pq.top();
		 	pq.pop();
		 }
		 sort(arr1,arr1+n,greater<ll>());
		 sort(arr2,arr2+m,greater<ll>());

		if(sum1 > sum2){cout<<0<<endl;continue;}
		ll temp = sum1+sum2-sumN;
		if(sumN <= temp){
				cout<<-1<<endl;continue;
			}

		ll diff = abs(sum1-sum2);
		ll ans = 0;
		for( ll i=n-1,j=0; i>=0 && j<=m-1;){
			if(arr1[i] <arr2[j]){
				sum1 = sum1 - arr1[i] +arr2[j];
				sum2 = sum2 - arr2[j] + arr1[i];
				ans += 1;
				if(sum1 > sum2){
					break;
				}
				
				i--,j++;

			}
			else{
				break;
			}
			if(diff<=0){
				break;
			}
		}

		if(sum1>sum2){
			cout<<ans<<endl;
		}
		else{
			cout<<-1<<endl;
		}

	}
}










