#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'


ll find_lis(vector<ll>& v)  
{  
    if (v.size() == 0)  
        return 0;  
  
    vector<ll> tail(v.size(), 0);  
    ll length = 1; 
  
    tail[0] = v[0];  
      
    for (ll i = 1; i < v.size(); i++) {  
  
            
        auto b = tail.begin(), e = tail.begin() + length; 
        auto it = lower_bound(b, e, v[i]);  
              
        
        if (it == tail.begin() + length) 
        tail[length++] = v[i];  
        else   
        *it = v[i];  
    }  
  
    return length;  
}  
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;

		vector<ll> arr;
		set<ll> s1;
		for(ll i=0;i<=n-1;i++){
			int x ;
			cin>>x;
			arr.push_back(x);
			
			s1.insert(x);
		}
		if(n==1){
			cout<<1<<endl;
			continue;
		}

		ll count = 1;
		ll lis = find_lis(arr);

		while(lis!=s1.size()){
			for(int i=0;i<=n-1;i++){
				arr.push_back(arr[i]);
			}
			lis = find_lis(arr);
			count++;
		}

		

		// ll ans = abs((ll)s1.size()-lis);

		//  cout<<ans+1<<endl;
		// //cout<<"lis --> "<<lis<<"           , size--->"<<s1.size()<<endl;
		// //cout<<s1.size()<<endl;
	cout<<count<<endl;

	}

}