#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// 100 , 20, 10, 5, 1
// Greedy solution will work because each number in the sequence 1,5,10,20,100 is a divisor of the number after it.
int main(){
	ll arr[5] = {100,20,10,5,1};
	ll n;
	cin>>n;
	ll ans = 0;
	for(ll i=0;i<=4;i++){
		if(n>=arr[i]){
		ans += n/arr[i];
		n = n%arr[i];
	}

	}

	cout<<ans;
	

}