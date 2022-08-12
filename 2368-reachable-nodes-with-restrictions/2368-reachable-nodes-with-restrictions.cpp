class Solution {
public:
    void dfs(int node, vector<int>adj[],vector<int>&vis,int &count)
    {
        if(vis[node])
        {
            return;
        }
        vis[node]=1;
        count++;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                dfs(it,adj,vis,count);
            }
            
        }
        }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int>vis(n+1,0);
        vector<int>adj[n];
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
            
        }
        int count=0;
        for(auto a:restricted)
        {
            vis[a]=1;
        }
        dfs(0,adj,vis,count);
        return count;
    }
};
