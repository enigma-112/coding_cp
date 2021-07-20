// Same code as given in cp-algorithms
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define pii pair<int,int> 

void fastio(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

void z_function(ll z[],string str){ // z_function to build the z array
	ll n = (ll)str.length();
	for(ll i=0;i<=n-1;i++){
		z[i]=0;
	}

	ll l = 0;
	ll r = 0;
	for(ll i=1;i<=n-1;i++){

		if(i<=r){
			z[i] = min(r-i+1, z[i-l]); // min(r-i+1, z[0 + i-l])
		}

		while(i+z[i]<=n-1 && str[z[i]]==str[i+z[i]]){
			z[i]++;
		}

		if(i+z[i]-1 > r){
			l = i;
			r = i+z[i]-1;
		}
	}

}
void searchPattern(string & txt,string & pat){
	string temp = pat+"$"+txt;
	ll n = (ll)temp.length();
	ll z[n]; // instead of creating an array here, we can return an array or vector from z_function
	z_function(z,temp);
	for(ll i=0;i<=n-1;i++){
		if(z[i] == pat.length()){
			cout<<i-pat.length()-1<<endl; // printing the starting positions of pat in txt
		}
	}

}

int main(){
	fastio();
	string txt,pat;
	cin>>txt>>pat;
	searchPattern(txt,pat);
}