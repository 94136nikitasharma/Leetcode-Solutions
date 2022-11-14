class Solution
{
    public:
        vector<int> majorityElement(vector<int> &nums)
        {
            int num1 = -1;
            int num2 = -1;
            int cnt1 = 0;
            int cnt2 = 0;
            int n = nums.size();
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == num1)
                {
                    cnt1++;
                }
                else if (nums[i] == num2)
                {
                    cnt2++;
                }
                else if (cnt1 == 0)
                {
                    num1 = nums[i];
                    cnt1++;
                }
                else if (cnt2 == 0)
                {
                    num2 = nums[i];
                    cnt2++;
                }
                else
                {
                    cnt1--;
                    cnt2--;
                }
            }
            vector<int> ans;
            int num1c = 0;
            int num2c = 0;
            for (int i = 0; i < n; i++)
            {
                if (nums[i] == num1)
                {
                    num1c++;
                }
                else if (nums[i] == num2)
                {
                    num2c++;
                }
            }
            if (num1c > n / 3)
            {
                ans.push_back(num1);
            }
            if (num2c > n / 3)
            {
                ans.push_back(num2);
            }
            return ans;
        }
};