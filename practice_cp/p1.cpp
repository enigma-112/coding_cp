#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define endl "\n"

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

    int n;cin>>n;
    vector<int> preorder(n);
    vector<bool> isLeaf(n);
    for(ll i=0; i<=n-1; i++){
    	cin>>preorder[i];
    }
    for(ll i=0; i<=n-1; i++){
    	cin>>isLeaf[i];
    }

    
   	

   
   
}
