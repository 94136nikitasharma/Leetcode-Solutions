class Solution
{
    public:
        string minWindow(string s, string t)
        {
            string ans = "";
            if (s.size() < t.size()) return ans;
            int n = t.size();
            unordered_map<char, int> mpp;
           
            
            int l = INT_MAX;
            for (int i = 0; i < n; i++)
            {
                mpp[t[i]]++;
                
            }
             int cnt =  mpp.size();
            int start = 0;
            int end = 0;

            while (end < s.size())
            {
                if (mpp.find(s[end]) != mpp.end())
                {
                    mpp[s[end]]--;

                    if (mpp[s[end]] == 0) cnt--;
                }
                if (cnt > 0) end++;
                else if (cnt == 0)
                {
                    while (cnt == 0)
                    {
                        if (mpp.find(s[start]) != mpp.end())
                        {
                            if (end - start + 1 < l)
                            {
                                l = end - start + 1;
                                ans = s.substr(start, end - start + 1);
                            }
                            mpp[s[start]]++;
                            if (mpp[s[start]] > 0) cnt++;
                        }
                        start++;
                    }
                    end++;
                }
            }
            return ans;
        }
};