class Solution {
public:
    int dp[13][10000];
    int solve(vector<int>&coins,int amount,int i)
    {
         if(i==0 or amount==0)
        {
            if(amount==0)
                return 0;
            return INT_MAX-1;
         }
        if(dp[i][amount]!=-1)
        {
            return dp[i][amount];
        }
        if(coins[i-1]<=amount)
        {
            return dp[i][amount]=min(1+solve(coins,amount-coins[i-1],i),solve(coins,amount,i-1));
        }
        else
        {
            return dp[i][amount]=solve(coins,amount,i-1);
        }
        
    }
    int coinChange(vector<int>& coins, int amount) {
      memset(dp,-1,sizeof(dp));  
       int ans=solve(coins,amount,coins.size());
       
      // return (ans==INT_MAX-1)?-1:ans;
        if(ans==INT_MAX-1)
        {
            return -1;
        }
        return ans;
        
    }
};