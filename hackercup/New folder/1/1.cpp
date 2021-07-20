#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		char inp[n];
		char out[n];
		for(ll i=0;i<=n-1;i++){
			cin>>inp[i];
		}
		for(ll i=0;i<=n-1;i++){
			cin>>out[i];
		}

		bool mat[n][n];
		for(ll i=0;i<=n-1;i++){
			mat[i][i]=true;
		}

		// for upper triangle
		for( ll i = 1; i<=n-1;i++){
			 ll r=0,c=i;
			 while(c<=n-1){
			 	if(out[r]=='N'){
			 		mat[r][c] = false;
			 	}
			 	else{
			 		if(c-r == 1){
				 		if(inp[c]=='Y'){
				 			mat[r][c]=true;
				 		}
				 		else{
				 			mat[r][c]=false;
				 		}
			 		}
			 		else{
			 			mat[r][c] = (mat[r][c-1] && mat[r+1][c]);
			 		}
			 	}
			 r++,c++;
			 }
		}

		// for lower triangle

		for( ll i= n-2 ; i>=0; i--){
			ll r = n-1, c = i;
			while(c>=0){
				if(out[r] == 'N'){
					mat[r][c] = false;
				}
				else{
					if(r-c == 1){
						if(inp[c]=='Y'){
							mat[r][c]=true;
						}
						else{
							mat[r][c] = false;
						}
					}
					else{
						mat[r][c] = (mat[r][c+1] && mat[r-1][c]);
					}
				}
			}

			r--,c--;
		}


		cout<<"Case #"<<t<<":"<<endl;
		for(ll i=0;i<=n-1;i++){
			for(ll j=0;j<=n-1;j++){
				if(mat[i][j]==true){
					cout<<'Y';
				}
				else{
					cout<<'N';
				}
			}
			cout<<endl;

		}

	}
}