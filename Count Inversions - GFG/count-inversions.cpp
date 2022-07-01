// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    void merge(long long arr[],long long left,long long mid,long long right,long long &count)
    {
        long long i=left;
        long long j=mid+1;
         long long k = left;
        long long copy[right];
        while((i<=mid) && (j<=right))
        {
            if(arr[i]<=arr[j])
            {
                copy[k++]=arr[i++];
            }
            else
            {
                copy[k++]=arr[j++];
                count+=(mid-i+1);
            }
        }
        while(i <= mid){
            copy[k++] = arr[i++];
        }
         while(j <= right){
            copy[k++] = arr[j++];
        }
        for(int it=left;it<=right;it++){
            arr[it] = copy[it];
        }
        
    }
    void mergesort(long long arr[],long long left,long long right,long long &count)
    {
        if(left>=right)
        {
            return;
        }
        int mid = left + (right - left)/2;
        mergesort(arr,left,mid,count);
        mergesort(arr,mid+1,right,count);
        merge(arr,left,mid,right,count);
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long left = 0;
        long long right = N-1;
        long long int count = 0;
        
        mergesort(arr,left,right,count);
        
        return count;
    }

};

// { Driver Code Starts.

int main() {
    
    long long T;
    cin >> T;
    
    while(T--){
        long long N;
        cin >> N;
        
        long long A[N];
        for(long long i = 0;i<N;i++){
            cin >> A[i];
        }
        Solution obj;
        cout << obj.inversionCount(A,N) << endl;
    }
    
    return 0;
}
  // } Driver Code Ends