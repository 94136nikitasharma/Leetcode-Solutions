class Solution {
public:
    int dp[10001];
    int costt(vector<int>&cost ,int i)
    {
        int n=cost.size();
        if(i>n)
        {
            return INT_MAX-121212;
        }
        if(i==n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        {
            return dp[i];
        }
        return dp[i]=min(cost[i]+costt(cost,i+1),cost[i]+costt(cost,i+2));
    }
    int minCostClimbingStairs(vector<int>& cost) {
         memset(dp, -1, sizeof(dp));
        return min(costt(cost,0),costt(cost,1));
    }
};
