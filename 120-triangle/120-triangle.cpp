class Solution {
public:
    int dp[201][201];
    int minPath(vector<vector<int>>& triangle,int i,int j)
    {
        int n=triangle.size();
         if(i>=n)
            return 0;
        if(i==n-1)
            return dp[i][j] = triangle[i][j];
         if(dp[i][j]!=-1)
            return dp[i][j];
         return dp[i][j] = triangle[i][j] + min(minPath(triangle,i+1,j),minPath(triangle,i+1,j+1));
    }
    int minimumTotal(vector<vector<int>>& triangle) {
         memset(dp,-1,sizeof(dp));  
         return minPath(triangle,0,0);
    }
};