#include<bits/stdc++.h>
using namespace std;

#define ll long long int

void fast(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
}
int main(){

	//fast();
	
	ll t;
	cin>>t;
	cout<<"hkdfshfj"<<endl;
	while(t--){
		ll a1,b1,c1,d1; // a1-- left, b1 -- right, c1 -- down, d1--up
		cin>>a1>>b1>>c1>>d1;

		ll a,b,c,d;
		a = d1;
		b = c1;
		c = a1;
		d = b1;

		ll x,y,x1,y1,x2,y2;
		cin>>x>>y>>x1>>y1>>x2>>y2;

		bool hr = false;
		bool vr = false;
		ll y_big = max(y1,y2);
		ll y_small = min(y1,y2);
		ll x_big = max(x1,x2);
		ll x_small = min(x1,x2);

		ll up = abs(y_big-y);
		

		ll down = abs(y_small - y);

		ll left = abs(x_small-x);
		ll right = abs(x_big-x);
// cout<<"up"<<up<<endl;
// cout<<"down"<<down<<endl;
// cout<<"left"<<left<<endl;
// cout<<"right"<<right<<endl;

		
		if(up >= down){

			if(a>=b && abs(a-b)<=up){
				hr=true;
			}
			else if(a>b){
				hr =false;
			}
			else if(a <b && abs(a-b) <= down){
				hr = true;
			}
			else{
				hr = false;
			}
		}
		else if(down>up){

				if(b>=a && abs(a-b)<=down){
				hr=true;
			}
			else if(b>a){
				hr =false;
			}
			else if(b <a && abs(a-b) <= up){
				hr = true;
			}
			else{
				hr = false;
			}
		}
	 if(left>=right){

			if(c>=d && abs(c-d)<=left){
				vr=true;
			}
			else if(c>d){
				vr =false;
			}
			else if(c <d && abs(c-d) <= right){
				vr = true;
			}
			else{
				vr = false;
			}

		}

		else if(right>left){

			if(d>=c && abs(c-d)<=right){
				vr=true;
			}
			else if(d>c){
				vr =false;
			}
			else if(d <c && abs(c-d) <= left){
				vr = true;
			}
			else{
				vr = false;
			}

		}

		if(down==0 && b>a){
			hr = false;
		}
		if(up == 0 && a>b){
			hr=false;
		}
		if(left == 0 && c>d){
			vr =false;
		}
		if(right == 0 && d>c){
			vr=false;
		}

		if(up == 0 && down ==0 && (a!=0 || b!=0)){
			vr=false;
		}
		if(left == 0 && right ==0 && (c!=0 || d!=0)) {
			hr=false;
		}
		// cout<<"hr"<<hr<<endl;
		// cout<<"vr"<<vr<<endl;
		if(hr==true && vr == true){
			cout<<"YES"<<"\n";

		}
		else{
			cout<<"NO"<<"\n";

		}

	}
}

/*

1
1 1 1 1
1 1 1 1 1 1

1
0 0 0 1
0 0 0 0 0 1
*/
