#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair

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
    	if(n<=4){
    		if(n==1){
    			cout<<20<<endl;
    		}
    		else if(n==2){
    			cout<<36<<endl;
    		}
    		else if(n==3){
    			cout<<51<<endl;
    		}
    		else{
    			cout<<60<<endl;
    		}
    		continue;
    	}

    	ll q = n/4;
    	ll r = n%4;
    	ll sum = 44 * q;
    	if(r==0){
    		sum += 16;
    	}
    	else if(r==1){
    		sum += (20+12);
    	}
    	else if(r==2){
    		sum += (36+8);
    	}
    	else if(r==3){
    		sum += (51+4);
    	}
    	cout<<sum<<endl;



    }

   
   
}

