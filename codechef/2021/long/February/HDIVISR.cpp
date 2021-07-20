#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

void fastio(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	#ifndef ONLINE_JUDGE
		freopen("E:/coding_cp/input.txt","r",stdin);
		freopen("E:/coding_cp/output.txt","w",stdout);
	#endif
}

int main(){
	fastio();
	
		ll n;cin>>n;
		for(ll i=10;i>=1;i--){
			if(n%i == 0){
				cout<<i;
				break;
			}
		}

	

}