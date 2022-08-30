class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpoint=-1;
        int n=nums.size()-1;
        
        for(int i=n;i>0;i--)
        {
            if(nums[i]>nums[i-1])
            {
               
                breakpoint=i-1;
                 break;
            }
        }
        if(breakpoint<0)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
         for(int i=n;i>0;i--)
        {
             if(nums[i]>nums[breakpoint])
             {
                 swap(nums[breakpoint],nums[i]);
                 reverse(nums.begin() + breakpoint + 1, nums.end());
                  break;
             }
         }
    }
};