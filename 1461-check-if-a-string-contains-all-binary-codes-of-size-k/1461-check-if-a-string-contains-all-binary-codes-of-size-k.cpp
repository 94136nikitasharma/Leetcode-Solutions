class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size())
        {
            return false;
        }
    int n=s.size();
        set<string>val;
        string ans;
       for(int i=0;i<n-k+1;i++)
       {
         ans =  s.substr(i,k);
           val.insert(ans);
       }
        if(val.size()==pow(2,k))
        {
            return true;
        }
        return false;
        
    }
};