class Solution {
public:
    int dp[1001];
    int solve(vector<int>&nums,int target,int n,int currsum)
    {
        if(currsum==target)
        {
            return 1;
            
        }
        if(currsum>target)
        {
            return 0;
        }
        if(dp[currsum]!=-1)
        {
            return dp[currsum];
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(currsum<=target)
            {
                ans+=solve(nums,target,n,currsum+nums[i]);
            }
        }
        return dp[currsum]=ans;
    }
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        return solve(nums,target,n,0);
    }
};