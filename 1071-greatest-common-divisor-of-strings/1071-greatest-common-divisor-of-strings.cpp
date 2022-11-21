class Solution {
public:
    int gcdd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        return gcdd(b,a%b);
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2==str2+str1)
        {
            return str1.substr(0,gcdd(str1.size(),str2.size()));
        }
       return "";
        
    }
};
