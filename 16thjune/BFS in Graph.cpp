#include <bits/stdc++.h> 
void bfs(int i,vector<int> adj[],vector<int> &visited,vector<int> &ans){
    
    visited[i]=true;

    queue<int> q;

    q.push(i);

    while(!q.empty()){

        int x=q.front();
        q.pop();
        ans.push_back(x);

        for(auto j:adj[x]){

            if(!visited[j]){
                 q.push(j);
                visited[j]=true;
               
            }
        }
    }
}
vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    vector<int> adj[vertex];

    vector<int> ans;
    //first create adjacency list

     for(auto i:edges){
        int u=i.first;
        int v=i.second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

        for(int  i = 0;i<vertex;i++){

        sort(adj[i].begin(),adj[i].end());

    }

    vector<int> visited(vertex,false);

    for(int i=0;i<vertex;++i){
        if(!visited[i]){
            bfs(i,adj,visited,ans);
        }
    }

    return ans;
}