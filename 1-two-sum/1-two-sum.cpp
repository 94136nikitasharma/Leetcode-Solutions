class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            if(mpp.find(target-nums[i])!=mpp.end())
            {
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
            }
            else
            {
                mpp[nums[i]]=i;
            }
        }
        return ans;
        
    }
};