#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define maxi 1000000
#define endl '\n'

//int sieve[1000001];
//vector<vector<int>> v1(1000001);
void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
   // cout.tie(0);

    /*#ifndef ONLINE_JUDGE	
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
    #endif*/
}



int main(){
	fastio();

	int t;
	cin>>t;
	while(t--){

		int n;
		cin>>n;

		if(n==1){
			cout<<1<<endl;
			cout<<1<<" "<<1<<endl;
			continue;
		}
		if(n==2){
			cout<<1<<endl;
			cout<<2<<" "<<1<<" "<<2<<endl;
			continue;
		}
		cout<<n/2<<endl;

		for(int i=2;i<=n;i +=2){
			if(i==2){

				cout<<3<<" "<<1<<" "<<2<<" "<<3<<endl;

			}
			else {
				if(i+1<=n){
				cout<<2<<" "<<i<<" "<<i+1<<endl;
				}
				else{
					cout<<1<<" "<<i<<endl;
				}

			}

			
		}
		
	}

}

/*

2
5
6
*/