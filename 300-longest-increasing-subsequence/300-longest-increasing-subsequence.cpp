class Solution {
public:
    int dp[2501][2501];
   int solve(vector<int> &nums, int ind, int prev){
        if( ind == nums.size()) return 0;
        
        if( dp[ind][prev+1] != -1) return dp[ind][prev+1]; 
        if( prev ==-1 || nums[ind]> nums[prev]){
            return dp[ind][prev+1]= max( 1+ solve(nums,ind+1, ind), solve( nums, ind+1, prev));
        }
        
        else{
            return dp[ind][prev+1]=  solve(nums, ind+1, prev);
        }
    }
    int lengthOfLIS(vector<int>& nums) {
         memset(dp,-1,sizeof(dp));
        return solve( nums, 0, -1);
    }
};
