class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
       int n=graph.size();
        vector<int>color(n,0);
        for(int i=0;i<n;i++)
        {
            if(color[i]==0) 
            {
            queue<int>q;
            q.push(i);
            color[i]=1;
            while(!q.empty())
            {
                int parent=q.front();
                q.pop();
                for(auto child:graph[parent])
                {
                    if(color[child]==color[parent])
                    {
                        return false;
                    }
                    else if(color[child]==0)
                    {
                        q.push(child);
                        color[child]=-color[parent];
                    }
                }
            }
      }
            
        }
        return true;
    }
};
