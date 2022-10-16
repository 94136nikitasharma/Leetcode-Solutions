class Solution
{
    public:
        vector<vector < string>> groupAnagrams(vector<string> &strs)
        {
            map<string, vector < string>> mpp;
            vector<vector < string>> nik;
            

            for (int i = 0; i < strs.size(); i++)
            {
                string ans = strs[i];
                sort(ans.begin(), ans.end());
                mpp[ans].push_back(strs[i]);
            }
            for (auto it: mpp)
            {
                nik.push_back(it.second);
            }
           
            return nik;
        }
};