class Solution {
public:
    void helper(int k,int n, vector<vector<int>>&ans,vector<int>&ds,int start)
    {
        if(n==0 and ds.size()==k)
        {
            ans.push_back(ds);
            return;
        }
        if(n<=0 or ds.size()>=k)
        {
            return;
        }
        for(int i=start;i<=9;i++)
        {
            ds.push_back(i);
            helper(k,n-i,ans,ds,i+1);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
      vector<vector<int>>ans;
        vector<int>ds;
     helper(k,n,ans,ds,1);
        return ans;
    }
};