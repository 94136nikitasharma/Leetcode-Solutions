class Solution {
public:
    struct mycomp
    {
        
    
    bool operator()(const pair<int,string>&a,const pair<int,string>&b)
    {
        if(a.first!=b.first)
        {
           return a.first<b.first;
        }
        else
        {
          return  a.second>b.second;
        }
    }
    };
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int>mpp;
        vector<string>ans;
        priority_queue<pair<int,string>,vector<pair<int,string>>,mycomp>pq;
        int n=words.size();
        for(int i=0;i<n;i++)
        {
            mpp[words[i]]++;
        }
        for(auto it:mpp)
        {
           pq.push({it.second,it.first});
        }
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
        
    }
};