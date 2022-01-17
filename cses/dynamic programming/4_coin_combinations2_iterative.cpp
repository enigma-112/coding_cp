#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define endl "\n"
#define mod 1000000007


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
    int m,sum;cin>>m>>sum; // m = size of coins array
   // vector<int> coins(m);
    int coins[m];
    for(int i=0;i<=m-1;i++){
    	cin>>coins[i];
    }

    // iterative solution

     int dp[sum+1][n+1];
     for(int j=0; j<=m; j++){dp[0][j] = 1;}
     for(int i=1; i<=sum; i++){dp[i][0] = 0;}

     for(int i=1; i<=sum; i++){
         for(int j=1; j<=m; j++){
           if(coins[j-1] <= i){
             dp[i][j] = dp[i-coins[j-1]][j] + dp[i][j-1];
          }
          else{
             dp[i][j] = dp[i][j-1];
          }
         }
     }

     return dp[sum][m];  
}

	