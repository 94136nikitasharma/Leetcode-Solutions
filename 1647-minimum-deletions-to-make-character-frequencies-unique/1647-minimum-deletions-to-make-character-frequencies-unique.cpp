class Solution {
public:
    int minDeletions(string s) {
        int n=s.size();
       vector<int>v(26,0);
        for(int i=0;i<n;i++)
        {
            v[s[i]-'a']++;
        }
        unordered_set<int>set;
        int count=0;
        for(int i=0;i<26;i++)
        {
            while(v[i] and set.find(v[i])!=set.end())
            {
                v[i]--;
                count++;
            }
            set.insert(v[i]);
        }
        return count;
    }
};