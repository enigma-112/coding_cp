#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'
#define mod 1000000007



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

	int t;
	cin>>t;
	while(t--){
	int n,e,a,b,c;
	cin>>n>>e>>a>>b>>c;
	int arr[e];
	for(int i=0;i<=e-1;i++){
		cin>>arr[i];
	}
	
	vector<int> g1[n];

	for(int i=0;i<=e-1;i++){

		int st,en;
		cin>>st>>en;
		st--;
		en--;

		g1[st].push_back(en);
		g1[en].push_back(st);
	}

	a--;
	b--;
	c--;
		vector<int> path1 = bfs(g1,n,a,b);
		vector<int> path2 = bfs(g1,n,b,c);


		sort(arr,arr+e);
		ll ans =0;
		unordered_map<pair<ll,ll>,ll> m1;
		for(int i=0;i<=path1.size()-2;i++){
			m1[{path1[i],path[i+1]}]++;
		}

		// cout<<"path 1 : "<<endl;
		// for(auto x : path1){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;
		// cout<<"path 2 : "<<endl;
		// for(auto x : path2){
		// 	cout<<x<<" ";
		// }
		// cout<<endl;

		for(int i=0;i<=path2.size()-2;i++){
			m1[{path2[i],path2[i+1]}]++;
		}

		vector<ll> v2;
		for(auto x : m1){
			ll t = x.second;
			v2.push_back(t);
		}

		sort(v2.begin(),v2.end(),greater<int>());

		for(int i=0;i<=v2.size()-1;i++){
			ll temp = v2[i]*arr[i];
			ans+=temp;
		}

		cout<<ans<<endl;

	


	

}

}