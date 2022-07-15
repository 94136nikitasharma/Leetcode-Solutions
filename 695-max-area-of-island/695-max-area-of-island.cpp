class Solution {
public:
    int m,n;
    int dfs(vector<vector<int>>&grid,int i,int j)
    {
          if( i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == 1){
        grid[i][j]=0;
            
        return 1+dfs(grid,i,j+1)+dfs(grid,i,j-1)+dfs(grid,i-1,j)+dfs(grid,i+1,j);
          }
        return 0;
        
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        int ans=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    ans=max(ans,dfs(grid,i,j));
                }
            }
        }
        return ans;
    }
};
