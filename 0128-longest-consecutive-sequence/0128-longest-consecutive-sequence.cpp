class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       set<int>set;
        int n=nums.size();
        int prev=INT_MIN;
        int cnt=1;
        int mx=0;
        for(int i=0;i<n;i++)
        {
            set.insert(nums[i]);
        }
        for(auto x:set)
        {
            if((long)x-prev!=1)
            {
                prev=x;
                 mx=max(mx,cnt);
                cnt=1;
                
            }
            else
            {
                cnt++;
                mx=max(mx,cnt);
                prev=x;
            }
                
        }
        return mx;
    }
};