#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair

void fastio(){
 
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

 //    #ifndef ONLINE_JUDGE	
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
 //    #endif
}



int main(){
	fastio();

 ll t;
 cin>>t;
 while(t--){
 	ll r,c;
 	cin>>r>>c;
 	ll ans=0;
 	int arr[r][c];
 	for(int i=0;i<=r-1;i++){
 		for(int j=0;j<=c-1;j++){
 			cin>>arr[i][j];
 			ans +=arr[i][j];
 		}
 	}
 	//cout<<ans<<endl;
 	bool flag=true;
 	ll prev = ans;
 	while(1){
 		flag=true;
 		for(int i=0;i<=r-1;i++){
 			for(int j=0;j<=c-1;j++){

 				if(arr[i][j==0]){
 					continue;
 				}
 				ll l1=j-1,r1=j+1,t1=i-1,b1=i+1;
 				ll t11=0,t22=0,t33=0,t44=0;

 				while(l1>=0){
 					if(arr[i][l1]!=0){
 						t11 = arr[i][l1];
 						break;
 					}
 					l1--;

 				}
 				while(r1<=c-1){
 					if(arr[i][r1]!=0){
 						t22 = arr[i][r1];
 						break;
 					}
 					r1++;

 				}
 				while(t1>=0){
 					if(arr[t1][j]!=0){
 						t33 = arr[t1][j];
 						break;
 					}
 					t1--;

 				}
 				while(b1<=r-1){
 					if(arr[b1][j]!=0){
 						t44 = arr[b1][j];
 						break;
 					}
 					b1++;
 				}


 				if(t11==0 && t22==0 && t33==0 && t44==0){
 					continue;
 				}

 				ld divide =0;
 				if(t11!=0){divide++;}
 				if(t22!=0){divide++;}
 				if(t33!=0){divide++;}
 				if(t44!=0){divide++;}

 				ld avg = (1.0*(t11+t22+t33+t44))/divide;

 				if((ld)arr[i][j] < avg){
 					prev -= arr[i][j];
 					flag=false;
 				}
 				arr[i][j]=0;
 			}
 		}

 		ans += prev;
 		if(flag==true){
 			break;
 		}


 	}
 	cout<<ans<<endl;




 }
   
   
}

