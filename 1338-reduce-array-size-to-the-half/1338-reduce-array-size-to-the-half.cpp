class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>mpp;
        priority_queue<int>pq;
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            mpp[arr[i]]++;
        }
        int half=arr.size()/2;
        int ans=0;
        int removed=0;
        for(auto it:mpp)
        {
            pq.push(it.second);
        }
        while(half>0)
        {
            half-=pq.top();
            pq.pop();
            ans++;
        }
        
        return ans;
        
        
    }
};
// 3 3 3 3  5  5 5 2 2 7 size=10
// 5 5 5 2 2 size=5
// 2 2 7 size=3
// 2 and 7 is not possible
// 3-4
// 5-3
// 2-2 
// 7-1
// size =5 >= it.sum
// 1 2 3 4