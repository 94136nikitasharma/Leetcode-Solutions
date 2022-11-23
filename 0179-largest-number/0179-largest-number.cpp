class Solution
{
    public:
        static bool comparator(string a, string b)
        {
            return a + b > b + a;
        }
    string largestNumber(vector<int> &nums)
    {
        vector<string> res;
        string ans;
        for (int i = 0; i < nums.size(); i++)
        {
            res.push_back(to_string(nums[i]));
        }
        sort(res.begin(), res.end(), comparator);
        for (int i = 0; i < res.size(); i++)
        {
            ans += res[i];
        }
       if(ans[0]=='0')
       {
           return "0";
       }
        return ans;
    }
};