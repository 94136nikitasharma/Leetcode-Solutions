class Solution {
public: 
    int dp[601][101][101];
    int findMaxForm(vector<string>& strs, int m, int n) {
       memset(dp,-1,sizeof(dp));
        return memo(strs,m,n,0);
    }
    int memo(vector<string>&strs,int m,int n,int idx)
    {
      if(idx==strs.size())
      {
          return 0;
      }
        if(dp[idx][m][n]!=-1)
        {
            return dp[idx][m][n];
        }
        int zeros = count(begin(strs[idx]), end(strs[idx]), '0');
        int one=size(strs[idx]) - zeros;
       dp[idx][m][n]= memo(strs,m,n,idx+1);
        if(m-zeros>=0 and n-one>=0)
        {
          dp[idx][m][n]=max(dp[idx][m][n],1+memo(strs,m-zeros,n-one,idx+1));
        }
        return dp[idx][m][n];
    }
};
