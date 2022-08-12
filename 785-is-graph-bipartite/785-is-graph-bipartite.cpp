class Solution {
public:
    bool dfs(int node,vector<int>adj[],vector<int>&color)
    {
        for(auto it:adj[node])
        {
            if(color[it]==-1)
            {
                
                color[it]=1-color[node];
                if(!dfs(it, adj, color)) 
                {
                return false; 
                }
            }
                else if(color[it] == color[node]) return false; 
        }
            return true;
    }
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<int>adj[n];
        for(int i=0;i<n;i++)
        {
            for(int x:graph[i])
            {
                adj[i].push_back(x);
            }
           
        }
        vector<int>color(n,-1);
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                color[i]=1;
                if(!dfs(i,adj,color))
                {
                    return false;
                }
                
            }
        }
       return true;
    }
};