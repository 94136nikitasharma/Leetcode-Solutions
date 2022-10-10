class Solution {
public:
    int dp[201][201];
    int solve(int i,int j,vector<vector<int>>& grid)
    {
        if(i==0 and j==0)
        {
            return grid[0][0];
            
        }
        if(i<0 or j<0)
        {
            return 1e9;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        int up=grid[i][j]+solve(i-1,j,grid);
        int down=grid[i][j]+solve(i,j-1,grid);
        return dp[i][j]=min(up,down);
            
    }
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(n-1,m-1,grid);
    }
};