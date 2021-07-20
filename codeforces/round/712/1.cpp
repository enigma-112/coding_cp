#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define pb push_back
#define pii pair<int,int> 

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;cin>>t;
    while(t--){
    	string s;cin>>s;
    	ll n = (ll)s.length();
    	if(n==0){
    		cout<<"NO OK"<<endl;
    		continue;
    	}

    	bool flag = true;
    	for(ll i=0;i<=n-1;i++){
    		if(s[i]!='a'){
    			flag = false;
    			break;
    		}
    	}
    	if(flag==true){
    		cout<<"NO"<<endl;
    		continue;
    	}

    	string ans;
    	ll i=0,j=n-1;
    	for(;i<=j;i++,j--){
    		if(s[j]!='a'){
    			ans+='a';
    			ans += s.substr(i,n);
    			break;
    		}
    		else if(s[i]!='a'){
    			ans += s.substr(i,j-i);
    			ans += 'a';
    			ans += s.substr(j,n);
    			break;
    		}
    		else{
    			ans += s[i];
    		}
    	}

    	cout<<"YES"<<endl;
    	cout<<ans<<endl;
    }


}