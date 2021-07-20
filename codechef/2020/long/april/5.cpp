#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define maxi 1000000
#define endl '\n'


void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   // cout.tie(0);

    /*#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif*/
}



int main(){
	fastio();

	int t;
	cin>>t;
	while(t--){

		ll n;
		cin>>n;
		ll arr[n];
		for(int i=0;i<=n-1;i++){
			cin>>arr[i];
		}
		
		ll bad_subarrays = 0;
		ll total_subarrays = (n*(n+1))/2;

		for(int i=0;i<=n-1;i++){
			if(arr[i]%2==0){
				if(arr[i]%4==0){
					arr[i]=2;
				}
				else{
					arr[i]=1;
					bad_subarrays++;
				}
			}
			else{
				arr[i]=0;
			}
		}

		// for(int i=0;i<=n-1;i++){
		// 	cout<<arr[i]<<" ";
		// }

		

		//bool flag==false;
		
		int i=0,j=0;
		while(i<=n-1){
			if(arr[i]==2){
				// cout<<"inside 1 : i -- "<<i<<"  j -- "<<j<<endl;
				i++;
				j=i;
			}

			else if(arr[i]==0){
				// cout<<"inside 2 : i -- "<<i<<"  j -- "<<j<<endl;
				i++;
			}

			else if(arr[i]==1){
				ll n1 = i-j;
				// cout<<"inside 3 : i -- "<<i<<"  j -- "<<j<<"n1 -- "<<n1<<endl;
				i++;
				j=i;
				while(i<=n-1 && arr[i]==0){
					i++;
				}
				ll n2 = i-j;
				//cout<<"inside 3 : i -- "<<i<<"  j -- "<<j<<"n2 -- "<<n2<<endl;

				ll temp = n1+n2+1;

				ll x = (temp*(temp+1))/2;
				ll x1 = (n1*(n1+1))/2 ;
				ll x2 = (n2*(n2+1))/2;
				
				// cout<<"inside 3 : good1 1 -- "<<x1<<endl;				
				// cout<<"inside 3 : good2 2 -- "<<x2<<endl;

				ll temp2 =  x - x1-x2-1;
				// cout<<"inside 3: bad -- "<<temp2<<endl;

				bad_subarrays = bad_subarrays + temp2;

				
				

			}



		}

		// cout<<"total_subarrays -- "<<total_subarrays<<endl;
		cout<<total_subarrays-bad_subarrays<<endl;

	}

}


