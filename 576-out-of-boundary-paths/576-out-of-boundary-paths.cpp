class Solution {
public:
    int dp[51][51][51];
    int mod = pow(10,9) + 7;
    int solve(int &m,int &n,int &maxMove,int i,int j,int moves)
    {
        if(i< 0 || j<0 || i>=m || j>=n)
        {
            return 1;
        }
        if(maxMove==moves)
        {
            return 0;
        }
        if(dp[i][j][moves]!=-1)
        {
            return dp[i][j][moves]%mod;
        }
        int ans=0;
        ans=(ans+solve(m,n,maxMove,i,j-1,moves+1)) % mod;
        
        ans=(ans+solve(m,n,maxMove,i-1,j,moves+1)) % mod;
        ans=(ans+solve(m,n,maxMove,i+1,j,moves+1)) % mod;
        ans=(ans+solve(m,n,maxMove,i,j+1,moves+1) )% mod;
        dp[i][j][moves]=ans;
        return dp[i][j][moves]%mod;

    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
      memset(dp,-1,sizeof(dp));
       
        dp[m][n][maxMove]= solve(m,n,maxMove,startRow,startColumn,0);
        return dp[m][n][maxMove];
    }
};