#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void input(){
	#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}
int main(){
	input();
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	ll r1,c1,r2,c2;
	cin>>r1>>c1>>r2>>c2;

	if(r1==r2 && c1==c2){ // both points are same
		cout<<0;
	}
	else if((r1+c1==r2+c2)||(r1-c1==r2-c2)||(abs(r1-r2)+abs(c1-c2)<=3)){ // both points lie on same diagonal line
		cout<<1;                			 // (either primary diagonal or secondary diagonal)
	} 
	else if((abs(r1-r2)+abs(c1-c2))%2==0 || (abs(r1-r2)+abs(c1-c2))<=6 || abs((r1+c1)-(r2+c2))<=3 || abs((r1-c1)-(r2-c2))<=3){
		cout<<2;
	}
	else{
		cout<<3;
	}




}


