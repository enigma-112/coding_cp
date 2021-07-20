#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    #ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif
}


ll gcd(ll a,ll b){
	if(b==0){
		return a;
	}
	if(a<b){
		return gcd(b,a);
	}

	return gcd(b,a%b);
}
int main(){
//fastio();

ll t;
cin>>t;
while(t--){
	ll a,b;
	cin>>a>>b;
	if(a==b){
		cout<<-1<<" "<<-1<<endl;
		continue;
	}
	if(a>b){
		swap(a,b);
	}
	ll g = gcd(a,b);
	if(g==a){
		cout<<a<<" "<<b<<endl;
		continue;
	}

	if(a*2 < b){
		cout<<a<<" "<<a*2<<endl;

	}
	else{
		cout<<-1<<" "<<-1<<endl;
	}
}   
   
}

