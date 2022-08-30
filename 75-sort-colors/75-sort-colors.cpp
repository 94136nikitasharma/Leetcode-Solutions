class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int high=n-1;;
        int mid=0;
        while(mid<=high)
        {
            if(nums[mid]==0)
            {
                swap(nums[low],nums[mid]);
                mid++;
                low++;
            }
            else if(nums[mid]==2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
           else if(nums[mid]==1)
            {
                mid++;
            }
        }
        
    }
};
// class Solution {
//     public:
//     void sortColors(vector<int>& nums) 
//     {
//         int tmp = 0, low = 0, mid = 0, high = nums.size() - 1;
    
//         while(mid <= high)
//         {
//             if(nums[mid] == 0)
//             {
//                 tmp = nums[low];
//                 nums[low] = nums[mid];
//                 nums[mid] = tmp;
//                 low++;
//                 mid++;
//             }
//             else if(nums[mid] == 1)
//             {
//                 mid++;
//             }
//             else if(nums[mid] == 2)
//             {
//                 tmp = nums[high];
//                 nums[high] = nums[mid];
//                 nums[mid] = tmp;
//                 high--;
//             }
//         }
//     }
// };