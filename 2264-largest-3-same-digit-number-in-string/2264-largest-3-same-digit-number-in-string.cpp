class Solution {
public:
    string largestGoodInteger(string num) {
      vector<char>v;
        int n=num.size()-1;
        for(int i=0;i<n;i++)
        {
            if(num[i]==num[i+1] and num[i]==num[i+2])
            {
                v.push_back(num[i]);
            }
        }
           if(v.size()==0)
           
               return "";
           
            sort(v.begin(),v.end());
        char x=v[v.size()-1];
            string ans="";
            for(int i=0;i<3;i++)
            {
                ans+=x;
            } 
               
         return ans;        
    }
};
