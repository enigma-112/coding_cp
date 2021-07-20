// https://www.geeksforgeeks.org/matrix-chain-multiplication-dp-8/

// Solution_1 : https://practice.geeksforgeeks.org/viewSol.php?subId=006abd924145b45dce6eaca5cec8ce4d&pid=704556&user=enigma_112
// Tabulation : 
// Final Solution is at dp[1][n-1] : total input matrices --> n-1
// ith matrix is arr[i-1]*arr[i]
// 0th row and 0th column is not used

class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        int dp[n][n]={0};
        for(int l = 2;l<=n-1;l++){
            int i = 1;
            int j = l;
            while(j<=n-1){
                int temp = INT_MAX;
                for(int k=i;k<=j-1;k++){
                    temp=min(temp, dp[i][k]+dp[k+1][j]+arr[i-1]*arr[k]*arr[j]);
                }
                dp[i][j]=temp;
                i++,j++;
            }
        }
    
        return dp[1][n-1]; 
    }
};

// Solution_2 : 
// Tabulation : 
// Final Solution is at dp[0][n-2] : total input matrices --> n-1
// ith matrix is arr[i]*arr[i+1]
// 0th row and 0th column is used

class Solution{
public:
    int matrixMultiplication(int n, int arr[])
    {
        int dp[n][n]={0};
        for(int x = 1;x<=n-2;x++){
            int i = 0;
            int j = x;
            while(j<=n-2){
                int temp = INT_MAX;
                for(int k=i;k<=j-1;k++){
                    temp=min(temp, dp[i][k]+dp[k+1][j]+arr[i]*arr[k+1]*arr[j+1]);
                }
                dp[i][j]=temp;
                i++,j++;
            }
        }
    
        return dp[0][n-2]; 
    }
};

// Solution_3 : 
// Memoization : https://practice.geeksforgeeks.org/viewSol.php?subId=852c6dd772bb5f63157fa6f683debe15&pid=704556&user=enigma_112
// Final Solution is at dp[1][n-1] : total input matrices --> n-1
// ith matrix is arr[i-1]*arr[i]
int dp[101][101];
class Solution{
public:
    int MCM(int arr[], int i, int j){
        if(i==j){
            dp[i][j]=0;// Not Required, just for understanding
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans = INT_MAX;
        for(int k=i;k<=j-1;k++){
            ans = min(ans, MCM(arr,i,k)+MCM(arr,k+1,j)+arr[i-1]*arr[k]*arr[j]);
        }
        dp[i][j] = ans;
        return dp[i][j];
    }
    int matrixMultiplication(int n, int arr[])
    {
        memset(dp,-1,sizeof(dp));
        int ans = MCM(arr,1,n-1);
        return ans;
    }
};
