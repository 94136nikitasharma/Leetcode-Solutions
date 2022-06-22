// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int A[], int n) {
       vector<int> v;
       unordered_map<int,int> mp;
       bool flag=false;
   for(int i=0;i<n;i++)
       mp[A[i]]++;
   for(auto it:mp)
   {
       int first=it.first;
       int second=it.second;
       if(it.second>1)
       {
           flag=true;
           v.push_back(it.first);
       }
   }
   sort(v.begin(),v.end());
  if(flag) return v;
   return {-1};
   }
};


// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends