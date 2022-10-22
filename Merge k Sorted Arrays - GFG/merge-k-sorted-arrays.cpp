//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
#define N 105
using namespace std;
void printArray(vector<int> arr, int size)
{
for (int i=0; i < size; i++)
	cout << arr[i] << " ";
}


// } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to merge k sorted arrays.
    void merge(vector<int>&a,vector<int>&b)
    {
        int n1=a.size();
        int n2=b.size();
        vector<int>ans(n1+n2);
        int i=0;
        int j=0;
        int k=0;
        while(i<n1 && j<n2)
        {
            if(a[i]<=b[j])
            {
                ans[k]=a[i];
               k++;
               i++;
            }
            else
            {
                ans[k]=b[j];
               k++;
               j++;
            }
        }
        while(i<n1)
        {
            ans[k]=a[i];
             k++;
               i++;
        }
        while(j<n2)
        {
            ans[k]=b[j];
           k++;
           j++;
         
        }
          a=ans;
    }
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        //code here
        vector<int>ans=arr[0];
        for(int i=1;i<K;i++)
        {
            merge(ans,arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--){
	    int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }
	    Solution obj;
    	vector<int> output = obj.mergeKArrays(arr, k);
    	printArray(output, k*k);
    	cout<<endl;
    }
	return 0;
}






// } Driver Code Ends