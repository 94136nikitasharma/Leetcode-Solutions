class Solution {
public:
    int dp[1001][1001];
    int solve(string &text1,string &text2,int i,int j)
    {
        if(i<0 || j<0)
        {
            return 0;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        if(text1[i]==text2[j])
        {
            return dp[i][j]=1 + solve(text1,text2,i-1,j-1);
        }
        else
        {
            return dp[i][j]=0+max(solve(text1,text2,i,j-1),solve(text1,text2,i-1,j));
        }
    }
    int longestCommonSubsequence(string text1, string text2) {
        memset(dp,-1,sizeof(dp));
        int n=text1.size();
        int m=text2.size();
        return solve(text1,text2,n-1,m-1);
    }
};
