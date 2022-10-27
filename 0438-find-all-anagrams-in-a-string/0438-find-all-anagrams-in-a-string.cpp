class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {
            unordered_map<char, int> mpp;
            vector<int> ans;
            int cnt = 0;
            for (int i = 0; i < p.length(); i++)
            {
                mpp[p[i]]++;
            }
            cnt = mpp.size();
            int i = 0;
            int j = 0;
            int n = s.length();
            while (i < n and j < n)
            {
                if (mpp.find(s[j]) != mpp.end())
                {
                    mpp[s[j]]--;
                   
                    if (mpp[s[j]] == 0) cnt--;
                }
                if(j-i+1<p.length())
                {
                    j++;
                }
               else if (j-i+1==p.length())
                {
                   if(cnt==0)
                   {
                       ans.push_back(i);
                   }
                   if(mpp.find(s[i])!=mpp.end())
                   {
                       mpp[s[i]]++;
                       if(mpp[s[i]]==1)
                       {
                           cnt++;
                       }
                   }
                   i++;
                   j++;
                }
            }
            return ans;
        }
};