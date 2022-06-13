class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int j=0;
        int sum=0;
        int mx=0;
        int n=nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            mpp[nums[i]]++;
            if(mpp[nums[i]]>1)
            {
                while(j<n and mpp[nums[i]]>1)
                {
                    
                    sum-=nums[j];
                    mpp[nums[j]]--;
                     j++;
                }
            }
            mx=max(mx,sum);
        }
      return mx;
    }
};
