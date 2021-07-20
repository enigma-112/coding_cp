#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007

const int MAX = 1000001;  

int factor[MAX] = { 0 }; 


vector<int>  bfs(vector<int> g1[],int n,int start,int end){

	  
   queue<int> q1;
   bool * visited = new bool[n];

   for(int i=0;i<=n-1;i++){
		visited[i]=false;
	}

	q1.push(start);
	visited[start]=true;
	bool done = false;
	unordered_map<int,int> parent;

	while(!q1.empty() && !done){

		int x = q1.front();
		//cout<<x<<" ";
		q1.pop();

		for(auto i: g1[x]){
            
            if(visited[i]==false){
            parent[i] = x;
			q1.push(i);
			visited[i]=true;
			if(i==end){
				done=true;
				break;
			}
            }
		}
	}

	if(done == false){
			vector<int> path;
			return path;
	}
	else{


		vector<int> path;
		int current = end; // storing path in reverse order
		path.push_back(end);
		while(current != start){
			current = parent[current];
			path.push_back(current);
		}
		return path;

	}


}
int main(){

	//generatePrimeFactors();
	int t;
	cin>>t;
	while(t--){
	int n,e,a,b,c;
	cin>>n>>e;
	
	vector<int> g1[n];

	for(int i=0;i<=e-1;i++){

		int s,e;
		cin>>s>>e;
		s--;
		e--;

		g1[s].push_back(e);
		g1[e].push_back(s);
	}

	int cost[n];
	for(int i=0;i<=n-1;i++){
		cin>>cost[i];
	}

	int q;
	cin>>q;
	while(q--){

		int start,end;
		cin>>start>>end;
		start--;
		end--;


		vector<int> path = bfs(g1,n,start,end);


		if(path.size()!=0){
			for(int i=0;i<path.size(); i++){

				tempans = ((tempans%mod)*(cost[path[i]]%mod))%mod;
				
			}
			ll ans = calculateNoOFactors(tempans);
    			cout<<ans<<endl;
		}


	}


	

}

}