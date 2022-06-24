class Solution {
public:
    bool isPossible(vector<int>& target) {
        long sum=0;
        int max=0;
        int n=target.size();
        priority_queue<int>pq;
        
        for(int i=0;i<n;i++)
        {
           pq.push(target[i]);
            sum+=target[i];
            
        }
        while(pq.top()!=1)
        {
            int max=pq.top();
            pq.pop();
            long diff=sum-max;
             if(max==1 || diff == 1)  return true;
            if(diff>max || diff==0 || max%diff==0)    return false;
            max%=diff;
            sum=diff+max;
             pq.push(max);
            
            
            
        }
        
       return true; 
        
    }
};