class Solution {
public:
    static bool truck(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
       int n=boxTypes.size();
        int ans=0;
        sort(boxTypes.begin(),boxTypes.end(),truck);
        for(auto it:boxTypes)
        {
            int x=min(it[0],truckSize);
            ans+=x*it[1];
            truckSize-=x;
            // if(truckSize==x)
            // {
            //     break;
            // }
        }
        return ans;
    }
};