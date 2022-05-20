class Solution {
public:
    int dp[100][100];
   
    int solve(vector<vector<int>>& obstacleGrid,int x,int y)
    {
         int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(x>=m or y>=n) return 0;
        if(obstacleGrid[x][y]==1) return 0;
        if(x==m-1 and y==n-1) return 1;
        if(dp[x][y]!=-1) return dp[x][y];
        return dp[x][y]=solve(obstacleGrid,x+1,y)+solve(obstacleGrid,x,y+1);
        
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
       return  solve(obstacleGrid,0,0);
    }
};