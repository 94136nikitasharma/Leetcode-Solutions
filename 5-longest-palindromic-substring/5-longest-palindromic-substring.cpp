class Solution
{
    public:
        string extend(string s, int i, int j)
        {
            while (i >= 0 and j < s.length() and s[i] == s[j])
            {
                i--;
                j++;
            }
            return s.substr(i + 1, j - i - 1);
        }
    string longestPalindrome(string s)
    {
        int n = s.length();
        string ans = "";
        for (int i = 0; i < n; i++)
        {
            string s1 = extend(s, i, i);
            string s2 = extend(s, i, i + 1);
            if (s1.length() > ans.length())
            {
                ans = s1;
            }
            if (s2.length() > ans.length())
            {
                ans = s2;
            }
        }

        return ans;
    }
};