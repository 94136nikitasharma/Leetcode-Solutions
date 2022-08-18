class Solution {
public:

        
    
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        
       vector<int> adj[n];
        
        for(auto e:prerequisites){  
                                     
            adj[e[0]].push_back(e[1]); 
        }
        vector<int> vis(n,0);  
        vector<int> dfsvis(n,0);
        
        for(int i=0;i<n;i++){   
            
            if(!vis[i]){
                
                if(dfs(i,adj,vis,dfsvis)){  
                    
                    return false;
                }
            }
        }
        return true;  
        
        
    }
    bool dfs(int node , vector<int> adj[], vector<int> &vis, vector<int> &dfsvis){
        
        vis[node] = 1;        
        dfsvis[node] = 1;
        
        for(auto it:adj[node]){
            
            if(!vis[it]){              
                
                if(dfs(it,adj,vis,dfsvis)){  
                    return true;
                }
            }
            else if(dfsvis[it]){ 
                 return true;
            }
        }
        dfsvis[node]=0;   
        return false;
    }
};