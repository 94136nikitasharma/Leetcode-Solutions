class Solution {
public:
    int maxProduct(vector<string>& words) {
        
        int n=words.size();
        vector<int>bits(n);
        
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(auto x:words[i])
            {
                bits[i]=bits[i] | 1<<(x-'a');
            }
            for(int j=0;j<i;j++)
            {
            if((bits[i] & bits[j])==0)
            {
                int a=words[i].length();
                int b=words[j].length();
                int l=a*b;
                ans=max(ans,l);
            }
            }
        }
        return ans;
    }
};