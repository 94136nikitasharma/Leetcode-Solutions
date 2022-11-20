class Solution {
public:
    void solve(string digits,string output,int index,string mpp[],vector<string>&ans)
    {
        if(index>=digits.length())
        {
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string value=mpp[number];
        for(int i=0;i<value.length();i++)
        {
            output.push_back(value[i]);
            solve(digits,output,index+1,mpp,ans);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.length()==0)
        {
            return ans;
        }
            
        int index=0;
        string output;
        string mpp[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        solve(digits,output,index,mpp,ans);
        return ans;
        
    }
};