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

	ll a,b,c,d;
	cin>>a>>b>>c>>d;
	ll ans = a*d - b*c;
	cout<<ans;


}


