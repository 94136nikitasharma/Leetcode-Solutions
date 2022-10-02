class Solution {
public:
    int dp[32][1002];
    #define MOD 1000000007
    int solve(int n,int k,int target)
    {
        int count=0;
        if(n==0 and target==0) 
        {
            return 1;
        }
        if(n<=0 || target<=0) return 0;
        if(dp[n][target]!=-1)
        {
            return dp[n][target];
        }
        for(int i=1;i<=k;i++)
        {
             count = (count % MOD + solve(n-1,k,target-i)%MOD)%MOD;
        }
        return dp[n][target]=count;
    }
    int numRollsToTarget(int n, int k, int target) {
       memset(dp,- 1,sizeof(dp));
        return solve(n,k,target);
    }
};