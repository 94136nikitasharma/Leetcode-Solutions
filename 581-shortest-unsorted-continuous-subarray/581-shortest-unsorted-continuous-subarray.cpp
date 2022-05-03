class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        int start=0;
        int end=-1;
        int max=INT_MAX;
        int min=INT_MIN;
      
            while(j>=0)
            {
                if(nums[i]>=min)
                {
                    min=nums[i];
                    
                }
                else{
                     end=i;
                }
                if(nums[j]<=max)
                {
                   max= nums[j];
                }
                else
                {
                    start=j;
                }
                    
              i++;
                j--;
            
        }
        return end-start+1;
    }
};
