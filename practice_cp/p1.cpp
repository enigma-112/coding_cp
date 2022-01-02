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

void buildTree(vector<int> &preorder, unordered_map<int,int> &m1, int &preIndex, int inStart, int inEnd){
	if(inStart > inEnd){return ;}
	int rootValue = preorder[preIndex];
	preIndex++;

	// if the current node is a leaf node (no children)
    if (inStart == inEnd){
        // print the value of the root node and return
        cout<<<< ' ';
        return;
    }
	int x = m1[rootValue];
	buildTree(preorder, m1, preIndex, inStart, x-1);
	buildTree(preorder, m1, preIndex, x+1, inEnd);
	cout<<rootValue<<" ";
}
int main(){
	fastio();
	ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    vector<int> preorder(n);
    vector<int> inorder(n);
    for(int i=0;i<=n-1;i++){
    	cin>>preorder[i];
    }
    for(int i=0;i<=n-1;i++){
    	cin>>inorder[i];
    }

    unordered_map<int,int> m1;
    for(int i=0;i<=n-1;i++){
    	m1[inorder[i]]=i;
    }
    int preIndex = 0;
    buildTree(preorder,m1,preIndex,0,n-1);

   
}

