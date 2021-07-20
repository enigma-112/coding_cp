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
	freopen("E:/coding_cp/input.txt","r",stdin);
	freopen("E:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	fastio();

	ll t;cin>>t;
	while(t--){
		string s1;cin>>s1;
		// if(s1.length()==1){
		// 	cout<<"NO"<<endl;
		// 	continue;
		// }
	//	sort(s1.begin(),s1.end());
		unordered_map<ll,ll> m1;
		for(ll i=0;i<=(ll)s1.length()-1;i++){
			ll x = char(s1[i])-'a';
		//	cout<<s1[i]<<" : "<<x<<endl;
			m1[x]++;
		}
		ll cnt_even = 0;
		ll cnt_single=0;
		ll cnt = 1;
		
		for(auto i: m1){
			if((i.second%2)==0 && i.second!=0){
				cnt_even++;
			}
			else if(i.second==1){
				cnt_single++;
			}
		}
		//cout<<"cnt_single :"<<cnt_single<<endl;
		//cout<<"cnt_even : "<<cnt_even<<endl;
		if(cnt_even>=cnt_single){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
   
   
}

