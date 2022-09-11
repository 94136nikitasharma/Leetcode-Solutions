class Solution {
public:
    int maxPerformance(int n, vector<int>& speed, vector<int>& efficiency, int k) {
        int mod=1e9+7;
       vector<pair<int,int>>v(n);
       
        for(int i=0;i<n;i++)
        {
            v[i]={efficiency[i],speed[i]};
            
        }
        sort(v.rbegin(),v.rend());
        long ans=0;
        long speedsum=0;
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto [e,s]:v)
        {
            pq.push(s);
            speedsum+=s;
            if(pq.size()>k)
            {
                speedsum-=pq.top();
                pq.pop();
            }
            ans=max(ans,speedsum*e);
        }
        return ans%mod;
        
    }
};