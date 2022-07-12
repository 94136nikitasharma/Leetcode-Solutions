​
`class Solution {
public:
int maxProduct(vector<int>& nums) {
int ans = nums[0], mul;
for(int i=0;i<nums.size();i++)
{
mul= nums[i];
ans = max(ans,mul);
for(int j= i+1;j<nums.size();j++)
{
mul *= nums[j];
ans= max(ans,mul);
}
}
return ans;
}
};`
​