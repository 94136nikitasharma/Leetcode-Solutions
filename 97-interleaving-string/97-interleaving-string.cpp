class Solution {
public:
    int dp[201][201];
    bool niks(string s1,int i,string s2,int j,string s3,int k)
    {
         if(i==s1.length())
        {
            
             if(s2.substr(j)==s3.substr(k))
             {
                 return true;
             }
             return false;
        }
        if(j==s2.length())
        {
            if(s1.substr(i)==s3.substr(k))
            {
                return true;
            }
            return false;
        }
        if(dp[i][j]!=-1)
        {
            return dp[i][j];
        }
        return dp[i][j] = ((s3[k]==s1[i] && niks(s1,i+1,s2,j,s3,k+1)) ||  (s3[k]==s2[j] && niks(s1,i,s2,j+1,s3,k+1)));
    }
    bool isInterleave(string s1, string s2, string s3) {
        if(s1.length()+s2.length()!=s3.length())
        {
           return false; 
        }
     memset(dp,-1,sizeof(dp));
    return niks(s1,0,s2,0,s3,0);
    }
};