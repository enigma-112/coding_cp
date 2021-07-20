#include<bits/stdc++.h>
using namespace std;
#define ll long long int

// void fastio(){
 
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     //cout.tie(0);

//     #ifndef ONLINE_JUDGE	
// 	freopen("input.txt","r",stdin);
// 	freopen("output.txt","w",stdout);
//     #endif
// }



int main(){
	// ios_base::sync_with_stdio(false);
 //    cin.tie(NULL);
   // fastio();
    ll t ;
    ll x=0;
    cin>>t;
    while(t--){
    	x++;
    	ll n;
    	cin>>n;
    	char arr[n];
    	for(int i=0;i<=n-1;i++){
    		cin>>arr[i];
    	}

    	stack<char> stk1;

    	for(int i=0;i<=n-1;i++){
    		if(stk1.size()==0){
    			stk1.push(arr[i]);
    		}
    		else if(stk1.top()==arr[i]){
    			stk1.push(arr[i]);
    		}
    		else{
    			stk1.pop();
    		}
    	}

    	if(stk1.size()==1){
    		cout<<"Case #"<<x<<": "<<"Y"<<endl;
    	}
    	else{

    		cout<<"Case #"<<x<<": "<<"N"<<endl;
    	}



    }
}