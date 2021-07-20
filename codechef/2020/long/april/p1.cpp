#include <iostream>
#include <bits/stdc++.h>
using namespace std;

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
int main(){
  int V, E, tempX, tempY;
  cin >> V >> E;
    
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
        
        g[s][f]=1;
        g[f][s]=1;
    }
    
    
     bool *visited=new bool [V];
    for(int i=0;i<=V-1;i++){
        visited[i]=false;
    }

        int v1,v2;
    cin>>v1>>v2;
    unordered_map<int,int>  *path=find_path(g,V,visited,v1,v2);
    
    if(path!=NULL){
        cout<<v2<<" ";
        int x=v2;
    while(1){
        if(x==v1)
            break;
        cout<<path->at(x)<<" ";
        x=path->at(x);
        
    }
    }
    

}
