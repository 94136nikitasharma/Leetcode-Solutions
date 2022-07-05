class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       int n=nums.size();
        set<int>set;
        
        for(int i=0;i<n;i++)
        {
            set.insert(nums[i]);
        }
        int prev=INT_MIN;
        int count=1;
        int mx=0;
        
        for(auto x:set)
        {
            if(((long)x-prev)!=1)
            {
               prev=x;
                mx=max(mx,count);
                count=1;
            }
            else
            {
                count++;
                mx=max(mx,count);
                prev=x;
            }
        }
        return mx;
    }
};