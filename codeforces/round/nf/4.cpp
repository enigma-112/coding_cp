#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define endl '\n'

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==1){
			cout<<1<<endl;
			continue;
		}

		int arr[n]={0};
		int action = 1;
		queue<pair<int,int>> q;
		q.push({0,n-1});
		while(!q.empty()){
			int f = q.front().first;
			int s = q.front().second;
			q.pop();
			int mid = (f+s)/2;

			// if(f==s){
			// 	arr[f]=action;
			// 	action++;
			// 	continue;
			// }
			// if((s-f+1)%2==0){
			// 	arr[(s+f-1)/2]=action;
			// 	action++;
			// }
			// else{
			// 	arr[(s+f)/2]=action;
			// 	action++;
			// }
			arr[mid]=action;
			cout<<"mid : "<<mid<<endl;
			action++;

			if((mid-1 -f+1) >= (s-(mid+1)+1)){
			if(f!=mid){
				q.push({f,mid-1});
			}
			if(s!=mid){
				q.push({mid+1,s});
			}
		}
		else{
			if(s!=mid){
				q.push({mid+1,s});
			}
			if(f!=mid){
				q.push({f,mid-1});
			}
		}
		}

		for(int i=0;i<=n-1;i++){
			cout<<arr[i]<<" ";
		}
		cout<<endl;

	}
}