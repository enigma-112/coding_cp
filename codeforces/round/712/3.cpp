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
    	ll n;cin>>n;
    	string s;cin>>s;
    	ll l1=0,r1=0,l2=0,r2=0;
    	string ans1,ans2;
    	if(s[i]=='0'){cout<<"NO"<<endl;continue;}
    	ans1+='(';
    	ans2+='(';
    	l1=1,l2=1;
    	bool flag = true;
    	for(ll i=0;i<=n-1;i++){
    		if(s[i]=='1'){
    			if(l1<n/2 && l2<n/2){
    				ans1+='(';
    				ans2+='(';
    			}
    			else if(r1<l1 && r2<l2){
    				ans1+=')';
    				ans2+=')';
    			}
    			else{
    				cout<<"NO"<<endl;
    				flag = false;
    				break;
    			}
    		}
    		else{
    			if(l1<n/2 && ){

    			}
    		}

    	}
    }
}