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



int main(){
	fastio();
	ll t;cin>>t;
	while(t--){
		ll n,k;
		cin>>n>>k;
		string s1;cin>>s1;

		ll cnt0 = 0;
		ll cnt1 = 0;
		for(ll i=0;i< s1.length();i++){
			if(s1[i]=='0'){
				cnt0++;
			}
			else{
				cnt1++;
			}
		}
		ll len1 = k;
		ll totallen1 = n/k;

		//cout<<"each length : "<<len1<<endl;
		ll t1 = cnt0/totallen1;
		ll t2 = cnt1/totallen1;
		// cout<<"count of 0 :"<<cnt0<<endl;
		// cout<<"count of 1 :"<<cnt1<<endl;
		// cout<<"count of 0 in each length : "<<t1<<endl;
		// cout<<"count of 1 in each length : "<<t2<<endl;
		
		if(cnt0%k==0 && cnt1%k==0){
			
			if((t1+t2)!=len1){
			 	cout<<"IMPOSSIBLE"<<endl;
			 	continue;
			 }
		}
		else{
			cout<<"IMPOSSIBLE"<<endl;
			continue;
		}

		string temp1 = "";
		string temp2 = "";
		for(ll i=0;i<=t1-1;i++){
			temp1+='0';
		}
		for(ll i=0;i<=t2-1;i++){
			temp1+='1';
		}
 
		for(ll i=k-1;i>=0;i--){
			temp2 += temp1[i];
		}

		string ans = "";
		ll x = totallen1;
		ll x1 = 2;
		for(ll i=0;i<=x-1;i++){
			if(x1%2==0){
				ans += temp1;
			}
			else{
				ans += temp2;
			}
			x1++;
		}

		cout<<ans<<endl;

	}   
   
}

