class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
       int m= horizontalCuts.size();
       int n=verticalCuts.size();
        long long ans=0;
        long long mod=1e9+7;
        long long mx1=0;
        long long mx2=0;
        sort(horizontalCuts.begin(), horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        for(int i=1;i<m;i++)
        {
            mx1=max(mx1,(long long)horizontalCuts[i]-horizontalCuts[i-1]);
        }
        mx1=max(mx1,(long long)horizontalCuts[0]);
        mx1=max(mx1,(long long)h-horizontalCuts[m-1]);
        for(int i=1;i<n;i++)
        {
            mx2=max(mx2,(long long)verticalCuts[i]-verticalCuts[i-1]);
            
        }
        mx2=max(mx2,(long long)verticalCuts[0]);
        mx2=max(mx2,(long long)w-verticalCuts[n-1]);
        ans = (mx1*mx2)%mod;
        return (int)ans;
    }
};