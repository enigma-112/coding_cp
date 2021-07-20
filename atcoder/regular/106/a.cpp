#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
ll y = 0;
ll x = 0;
bool isPowerOf3(ll n){
	if(n<=2){return false;} // 1 can be represented as any no. to power 0 , but in this question 0 power is not required 
	while(n>1){
		if((n%3)!=0){
			return false;
		}
		n=n/3;
		y++;

	}

	return true;
}
void input(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}
int main(){
	input();
	ll n;cin>>n;
	//if(n<=7){cout<<-1;return 0;}
	ll a = 3, b=5;

	bool flag = false;
	
	x = 0;
	
	ll prev =1;
	for(ll i=5;i<=n;i=i*5LL){
		x++;
		if(i<prev){
			break;
		}
		prev = i;
		ll temp = n-i;
		if(temp>=3){
			y=0;
			if(isPowerOf3(temp)){
				cout<<y<<" "<<x;
				flag = true;
				break;
			}
		}
	}
	if(flag==false){
		cout<<-1;
	}

}