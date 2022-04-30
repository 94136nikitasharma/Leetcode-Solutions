class Solution {
public:
    void dfs(string s,string d,unordered_map<string,vector<pair<string,double>>>mp,unordered_map<string ,int>&visited,double &ans,double temp)
    {
        if(visited.count(s))
        {
            return;
        }
        if(s==d)
        {
            ans=temp;
            return;
        }
        visited[s]=1;
        for(auto x:mp[s])
        {
            dfs(x.first,d,mp,visited,ans,temp*x.second);
          
        }
        return;
    }
    vector<double> calcEquation(vector<vector<string>>& eq, vector<double>& values, vector<vector<string>>& q) {
        unordered_map<string,vector<pair<string,double>>>mp;
        for(int i=0;i<eq.size();i++)
        {
            mp[eq[i][0]].push_back({eq[i][1],values[i]});
            mp[eq[i][1]].push_back({eq[i][0],1.0/values[i]});
            
        }
        vector<double>Finalans;
        for(int i=0;i<q.size();i++)
        {
            string s=q[i][0];
            string d=q[i][1];
            unordered_map<string,int>visited;
            double ans=-1.0;
            double temp=1;
            if(mp.count(s))
            dfs(s,d,mp,visited,ans,temp);
            Finalans.push_back(ans);
        }
        return Finalans;
    }
};