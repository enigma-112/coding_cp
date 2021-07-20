#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define endl '\n'

bool compare(string x,string y){
	if(x.length()<=y.length()){
		return true;
	}
	return false;
}

// void fastio(){
 
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

// //     #ifndef ONLINE_JUDGE	
// // 	freopen("input.txt","r",stdin);
// // 	freopen("output.txt","w",stdout);
// //     #endif
// }



int main(){
// 	fastio();

	ll t;
	cin>>t;
	int cnt =0;
	while(t--){
		cnt++;
		ll n;
		cin>>n;

		vector<string> v1(n);
		for(int i=0;i<=n-1;i++){
			cin>>v1[i];
		}

		bool flag=true;

		sort(v1.begin(),v1.end(),compare);

		for(int i=0;i<=n-2;i++){
			string str2 = v1[i];
        	string str1 = v1[n-1];
  
    
    		size_t found = str1.find(str2.substr(1)); 
   			 if (found != string::npos) {

   	 		}
   	 		else{
   	 			flag=false;
   	 			break;

   	 		}   
   
	    }
	    // for(auto i: v1){
	    // 	cout<<i<<endl;
	    // }

	    if(flag==false){
	    	cout<<"Case #"<<cnt<<": "<<"*"<<endl;
	    }
	    else{
	    	cout<<"Case #"<<cnt<<": "<<v1[n-1].substr(1)<<endl;
	    }

}
}