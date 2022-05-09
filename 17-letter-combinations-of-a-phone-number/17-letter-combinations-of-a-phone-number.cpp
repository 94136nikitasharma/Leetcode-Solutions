class Solution {
public:
    vector<string>mpp={ "abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"},ans;
   
    vector<string> letterCombinations(string digits) {
        if(digits==""){
            return ans;
        }
        string combination="";
        helper(digits, 0, combination);
        return ans;
    }
    void helper(string &digits,int i,string &comb)
    {
        if(i==digits.size())
        {
            ans.push_back(comb);
            return;
        }
        for(auto it:mpp[digits[i]-'2'])
        {
            comb.push_back(it);
            helper(digits, i + 1, comb);
            comb.pop_back();
        }
    }
};
