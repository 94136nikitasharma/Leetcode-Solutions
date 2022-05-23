class Solution {
public:
    int cnt=0;
    void palindrome(string s,int start,int end)
    {
        while(start>=0 and end<=s.length() and s[start]==s[end])
        {
           cnt++;
            start--;
            end++;
            
        }
    }
    int countSubstrings(string s) {
       for(int i=0;i<s.length();i++)
       {
           palindrome(s,i,i);
           palindrome(s,i,i+1);
       }
        return cnt;
    }
};