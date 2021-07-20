#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define MAX 4002
 
ll dp[MAX + 1];
 

list<ll> denomination;
 
ll countMinCoins(ll n, ll C[], ll m){
    // Base case
    if (n == 0) {
        dp[0] = 0;
        return 0;
    }
    if (dp[n] != -1)
        return dp[n];
 
    ll ret = INT_MAX;
    for (ll i = 0; i < m; i++) {
 
        if (C[i] <= n) {
 
            ll x = countMinCoins(n - C[i],C, m);
            if (x != INT_MAX)
                ret = min(ret, 1 + x);
        }
    }
 
    dp[n] = ret;
    return ret;
}
 
void findSolution(ll n, ll C[], ll m){
    if (n == 0) {
 
        // Print Solutions
        for (auto it : denomination) {
            cout << it << ' ';
        }
 
        return;
    }
 
    for (ll i = 0; i < m; i++) {
        if (n - C[i] >= 0 && dp[n - C[i]] + 1 == dp[n]) {
 
            // Add current denominations
            denomination.push_back(C[i]);
 
            // Backtrack
            findSolution(n - C[i], C, m);
            break;
        }
    }
}
 

void countMinCoinsUtil(ll X, ll C[],ll N){
 
    // Initialize dp with -1
    memset(dp, -1, sizeof(dp));
 
    // Min coins
    ll isPossible = countMinCoins(X, C,
                        N);
 
    // If no solution exists
    if (isPossible == INT_MAX) {
        cout << "-1";
    }
 
    // Backtrack to find the solution
    else {
        findSolution(X, C, N);
    }
}
 

int main()
{
    int X = 21;
 
    // Set of possible denominations
    int arr[] = { 2, 3, 4, 5 };
 
    int N = sizeof(arr) / sizeof(arr[0]);
 
    // Function Call
    countMinCoinsUtil(X, arr, N);
 
    return 0;
}