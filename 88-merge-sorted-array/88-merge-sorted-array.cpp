class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       int i=0;
        int j=0;
       while(i<m and j<n)
        {
            if(nums1[i]>nums2[j])
            {
                swap(nums2[j],nums1[i]);
                i++;
                 sort(nums2.begin(),nums2.end()); 
            }
            else
            {
                i++;
            }
        }
        while(j!=n)
        {
            nums1[i]=nums2[j];
            i++;
            j++;
        }
    }
};