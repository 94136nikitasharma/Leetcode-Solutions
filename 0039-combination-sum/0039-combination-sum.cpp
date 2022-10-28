class Solution {
public:
    void dfs(vector<int>&candidates,int target,int ind, vector<int>&ds,vector<vector<int>>&ans)
    {
        if(ind==candidates.size())
        {
            if(target==0)
            {
               ans.push_back(ds);
            }
            return;
        
        }
        if(candidates[ind]<=target)
        {
            ds.push_back(candidates[ind]);
            dfs(candidates,target-candidates[ind],ind,ds,ans);
            ds.pop_back();
        }
        dfs(candidates,target,ind+1,ds,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>ds;
        dfs(candidates,target,0,ds,ans);
        return ans;
    }
};