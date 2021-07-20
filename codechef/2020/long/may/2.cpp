// https://www.codechef.com/MAY20B/problems/CORUS

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

int main(){
	ll t;
	cin>>t;
	while(t--){
		int n,q;
		cin>>n>>q;
		string str;
		cin>>str;
		int arr[26]={0};

		for(int i=0;i<=n-1;i++){
			int x = str[i]-'a';
			arr[x]++;
		}
		sort(arr,arr+26);
		vector<int> v1;
		for(int i=0;i<=25;i++){
				if(arr[i]!=0){
					v1.push_back(arr[i]);
				}
		}

		int sz  = v1.size();
		// for(int i=0;i<=sz-1;i++){
		// 	cout<<v1[i]<<" ";
		// }
		// cout<<endl;
		vector<int> prefix_sum(sz,0);
		prefix_sum[0]=v1[0];
		for(int i=1;i<=sz-1;i++){
				prefix_sum[i] = v1[i]+prefix_sum[i-1];
		}
       
       int ans=0;
       
       while(q--){
       	int c;
       	cin>>c;
       	int tmp = upper_bound(v1.begin(),v1.end(),c) - v1.begin();
       //	cout<<endl<<"pref[sz-1] : "<<prefix_sum[sz-1]<<"    "<< "c*sz : "<<c*sz<<endl;
       	if(tmp == sz){
       		cout<<0<<endl;
       		continue;
       	}

       	if(tmp == 0){
       		ans = (prefix_sum[sz-1] - c*sz);
       	}
       	else{
       		ans = (prefix_sum[sz-1] - prefix_sum[tmp-1] - c*((sz-1)-tmp+1));
       	}
       	cout<<ans<<endl;




       }
   }

 }
