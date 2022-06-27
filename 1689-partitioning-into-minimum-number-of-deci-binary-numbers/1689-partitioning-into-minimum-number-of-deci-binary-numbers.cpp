class Solution {
public:
    int minPartitions(string n) {
      int mx=0;
        int k=n.size();
        for(int i=0;i<k;i++)
        {
           mx=max(mx,n[i]-'0'); 
        }
        return mx;
    }
};