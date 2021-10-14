#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main(){
	vector<int> v1 = {9,8,7,6,5,4,3,2,1,3,3};

	sort(v1.begin(),v1.end());

	int it = lower_bound(v1.begin(),v1.end(),10) - v1.begin();
	cout<<it<<endl;


}