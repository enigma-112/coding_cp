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

void lps_function(ll lps[],string &s){
	    ll n = (ll)s.length();
	    lps[0]=0;
	    ll len = 0;
	    ll i=1;
	    while(i<=n-1){
	        if(s[i]==s[len]){
	            len++;
	            lps[i]=len;
	            i++;
	        }
	        else{
	            if(len>0){
	                len = lps[len-1];
	            }
	            else{
	                lps[i]=0;
	                i++;
	            }
	        }
	    }
	}

int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		ll n = (ll)s.length();
		if(n<=1){
			cout<<n<<endl<<endl;
			continue;
		}
	
	   
	   ll lps[n];
	   lps_function(lps,s);
    
       ll x = lps[n-1];
       if(x>0 && (n%(n-x)==0)){
       	
           cout<<n-x<<endl<<endl; // smallest period
       }
       else{
       	   cout<<n<<endl<<endl;
       }
      
	}
}