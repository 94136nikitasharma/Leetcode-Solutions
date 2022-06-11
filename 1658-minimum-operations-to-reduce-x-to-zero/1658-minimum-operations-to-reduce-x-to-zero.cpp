class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int i=0;
        int j=0;
        int Totalsum=0;
        for(int i=0;i<n;i++)
        {
            Totalsum+=nums[i];
        }
        int rs=Totalsum-x;
        if(rs==0)
        {
            return n;
        }
        int len=0;
        int temp=0;
        for(int i=0;i<n;i++)
        {
            temp+=nums[i];
            while(j<n and temp>rs )
            {
                temp-=nums[j];
                j++;
            }
            if(rs==temp)
            {
                len=max(len,i-j+1);
            }
        }
        if(len==0)
        {
            return -1;
        }
        return n-len;
    }
};