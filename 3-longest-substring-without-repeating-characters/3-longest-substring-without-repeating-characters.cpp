class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>set;
        int i=0;
        int j=0;
        int mx=0;
        int n=s.length();
        while(i<n  )
        {
            if(set.find(s[i])==set.end())
            {
                set.insert(s[i]);
                i++;
                int p=set.size();
                mx=max(mx,p);
            }
            else
            {
                set.erase(set.find(s[j]));
                j++;
            }
            
        }
        return mx;
        
    }
};