void dfs(int i,vector<int> adj[],vector<int> &visited,
vector<int> &ls){
    visited[i]=1;

    ls.push_back(i);

    for(auto it:adj[i]){
        if(!visited[it]){
            dfs(it,adj,visited,ls);
        }
    }
}
vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
{
    // Write your code here
    vector<int> adj[V];

    for(int i=0;i<edges.size();++i){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> vis(V,0);

    vector<vector<int>> ans;

    for(int i=0;i<V;++i)
    {
        if(!vis[i]){
            vector<int> ls;

            dfs(i,adj,vis,ls);

            ans.push_back(ls);
        }
    }

    return ans;
    
}