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

void lps_function(ll lps[],string str){ // lps_function to build the lps array
	ll n = (ll)str.length();
	ll len = 0;
	lps[0] = 0;
	ll i=1;
	while(i<=n-1){
		if(str[i]==str[len]){
			len++;
			lps[i] = len;
			i++;
		}
		else{
			if(len>0){
				len = lps[len-1];
			}
			else{
				lps[i] = 0;
				i++;
			}
		}
	}

}
void searchPattern(string & txt,string & pat){
	string temp = pat+"$"+txt;
	ll n = (ll)temp.length();
	ll lps[n]; // instead of creating an array here, we can return an array or vector from z_function
	lps_function(lps,temp);
	for(ll i=0;i<=n-1;i++){
		if(lps[i] == pat.length()){
			cout<<i-2*pat.length()<<endl; // printing the starting positions of pat in txt
		}
	}

}

int main(){
	fastio();
	string txt,pat;
	cin>>txt>>pat;
	searchPattern(txt,pat);
}