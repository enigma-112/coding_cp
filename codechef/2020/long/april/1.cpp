// https://www.codechef.com/APRIL20B/problems/COVIDLQ


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

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> v1(n);
		for(int i=0;i<=n-1;i++){
			cin>>v1[i];

		}

		int prev=-1;
		bool flag=true;
		for(int i=0;i<=n-1;i++){
			
				if(v1[i]==1){
					if(prev==-1){
						prev = i;
					}
					else{
						if(i-prev <6){
							
							flag=false;
							break;
						}
						prev=i;

					}
				}
		}
		if(flag==true){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}
   
   
}

