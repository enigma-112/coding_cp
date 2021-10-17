#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"

void fastio(){
    #ifndef ONLINE_JUDGE	
	freopen("D:/coding_cp/input.txt","r",stdin);
	freopen("D:/coding_cp/output.txt","w",stdout);
    #endif
}

int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll t;cin>>t;
    while(t--){
    	ll arr[5];
        for(ll i=0;i<=4;i++){
            cin>>arr[i];
        }
        ll india = 0,england=0;
        for(ll i=0;i<=4;i++){
            if(arr[i]==1){india++;}
            else if(arr[i]==2){england++;}
        }
        if(india > england){cout<<"india"<<endl;}
        else if(england > india){cout<<"england"<<endl;}
        else{
            cout<<"draw"<<endl; 
        }
    }
   
   
}

