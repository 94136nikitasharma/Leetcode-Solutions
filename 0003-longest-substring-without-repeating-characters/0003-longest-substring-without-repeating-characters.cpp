class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       unordered_set<char>st;
        int i=0;
        int mx=0;
        int j=0;
        int n=s.length();
        while(i<n)
        {
            if(st.find(s[i])==st.end())
            {
                st.insert(s[i]);
                i++;
                int size=st.size();
                mx=max(mx,size);
            }
            else
            {
                st.erase(s[j]);
                j++;
                
            }
              
        }
        return mx;
        
    }
};