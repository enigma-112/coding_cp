#include<bits/stdc++.h>
using namespace std;

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}
void printAllSubsequences(int arr[], int temp_arr[],int n,int i,int j){
	if(i==n){
		for(int x=0;x<=j-1;x++){
			cout<<temp_arr[x]<<" ";
			}
		cout<<endl;
		return ;

	}

	// // 1. Not take and call, then take and call
	// printAllSubsequences(arr,temp_arr,n,i+1,j);
	// temp_arr[j] = arr[i];
	// printAllSubsequences(arr,temp_arr,n,i+1,j+1);

	// 2. Take and call, then not take and call and since in an array the current element will be
	// replaced by the next elements in next function calls so there is no need to write any extra
	// line for not take. If it was a vector then for not take we have to do pop_back()

	temp_arr[j] = arr[i];
	printAllSubsequences(arr,temp_arr,n,i+1,j+1);
	printAllSubsequences(arr,temp_arr,n,i+1,j);



}
int main(){
	fastio();
	int n;cin>>n;
	int arr[n];
	int temp_arr[n]={0};
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;
	printAllSubsequences(arr,temp_arr,n,0,0);
}