class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),greater<int>());
        int n=nums.size()-1;
        int ans=0;
        
       
        for(int i=0;i<k;i++)
        {
           ans=nums[i];
        }
        return ans;
    }
}; 

    