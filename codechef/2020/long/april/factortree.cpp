#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl '\n'

#define mod 1000000007

const int MAX = 1000001;  

int factor[MAX] = { 0 }; 


unordered_map<int,int>  *find_path(int **g,int V,bool *visited,int v1,int v2){
    
    queue<int> q;
    q.push(v1);
    visited[v1]=true;
    unordered_map<int,int> *path=new unordered_map<int,int>();
        
    path->insert({v1,v1});
    if(v1==v2)
        return path;
    while(!q.empty()){
        
        int x = q.front();
        q.pop();
        if(x==v2)
            return path;
       
        for(int i=0;i<=V-1;i++){
            if(g[x][i]==1&&!visited[i]){
                q.push(i);
                path->insert({i,x});
                visited[x]=true;
            }
        }
        
    }
    return NULL;
    
}


  

void generatePrimeFactors(){ 
    factor[1] = 1; 
  
   
    for (int i = 2; i < MAX; i++) 
        factor[i] = i; 
  
   
    for (int i = 4; i < MAX; i += 2) 
        factor[i] = 2; 
  
   
    for (int i = 3; i * i < MAX; i++) { 
      
        if (factor[i] == i) { 
           
            for (int j = i * i; j < MAX; j += i) { 
                 
                if (factor[j] == j) 
                    factor[j] = i; 
            } 
        } 
    } 
} 
ll calculateNoOFactors( ll n) { 
    if (n == 1) 
        return 1; 
  
    ll ans = 1; 
  
   
    ll dup = factor[n]; 
  
    ll c = 1; 
  
   
    ll j = n / factor[n]; 
  
  
    while (j != 1) { 
       
        if (factor[j] == dup) 
            c += 1; 
  
        
        else { 
            dup = factor[j]; 
            ans = ((ans%mod) * ((c + 1)%mod))%mod; 
            c = 1; 
        } 
  
     
        j = j / factor[j]; 
    } 
  
    
    ans = ((ans%mod) * ((c + 1)%mod))%mod;
  
    return ans; 
}
int main(){

	  generatePrimeFactors();
	int t;
	cin>>t;
while(t--){
  int V, E, tempX, tempY;


  cin >> V ;
  E = V-1;
    
  int **g=new int*[V];
    for(int i=0;i<=V-1;i++){
        g[i]=new int[V];
        for(int j=0;j<=V-1;j++){
            g[i][j]=0;
        }
    }

  
    for(int i=0;i<=E-1;i++){
        int s,f;
        cin>>s>>f;
        s--;
        f--;
        g[s][f]=1;
        g[f][s]=1;
    }
    
    int temp[V];
    for(int i=0;i<=V-1;i++){
    	cin>>temp[i];
    }

    int q;
    cin>>q;
    while(q--){

    	int v1,v2;
    	ll tempans=1;
    	cin>>v1>>v2;
    	v1--;
    	v2--;
    	if(v1==v2){
    		//

    		tempans = temp[v1];
    		tempans = tempans;
    		ll ans = calculateNoOFactors(tempans);
    		cout<<ans<<endl;

    		continue;
    	}


     bool *visited=new bool [V];
    
    
    for(int i=0;i<=V-1;i++){
        visited[i]=false;
    }
  
    unordered_map<int,int>  *path=find_path(g,V,visited,v1,v2);
    
    if(path!=NULL){
       // cout<<v2<<" ";
    	tempans = temp[v2];
        int x=v2;
    while(1){
        if(x==v1)
            break;
       // cout<<path->at(x)<<" ";
        tempans = tempans* temp[path->at(x)];
        x=path->at(x);
        
    }


    }
    ll ans = calculateNoOFactors(tempans);
    		cout<<ans<<endl;
    }
  
  }
}
