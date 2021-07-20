#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

class player{
public:
	ll price;
	ll type;
};

bool compare(player x,player y){
	if(x.price < y.price){
		return true;
	}
	return false;
}
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n,s;
		cin>>n>>s;
		bool flag = true;
		player  px[n];
		for(int i=0;i<=n-1;i++){
			int a;
			cin>>a;
			px[i].price=a;
		}
		for(int i=0;i<=n-1;i++){
			int a;
			cin>>a;
			px[i].type = a;
		}


		sort(px,px+n,compare);

		ll p0=0,p1=0;

		for(int i=0;i<=n-1;i++){
			if(px[i].type ==0 && p0==0){
				p0=px[i].price;
			}
			else if(px[i].type == 1 && p1==0){
				p1=px[i].price;
			}

		}

		ll total = p0+p1;
		if(p0==0 || p1==0){
			cout<<"no"<<endl;
		}
		else if((total + s ) <= 100 ){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}

	}

}

/*

 you can move on to next question if getting TLE in Q1,
  even though using the exact same approach of class, the time limts are very stringent for that. Could be because you used python/java instead of c cpp 
*/