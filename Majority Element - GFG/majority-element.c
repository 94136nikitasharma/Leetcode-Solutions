// { Driver Code Starts
//Initial Template for C

#include <stdio.h>
#include <stdbool.h>


 // } Driver Code Ends
//User function Template for C

// Function to find majority element in the array
// a: input array
// size: size of input array



int majorityElement(int a[], int size)
{
   int halfsize = size/2;
   int count = 0;
   int candidate  = 0;
   int result = 0;
   
   for(int i =0;i<size;i++)
   {
       if(count == 0)
       {
           candidate = a[i];
       }
       
       if(a[i]==candidate)
       {
           count+=1;
       }
       else
       {
           count-=1;
       }
   }
   for(int j=0;j<size;j++)
   {
       if(a[j]==candidate)
       {
           result+=1;
       }
   }
   if(result > halfsize)
   {
       return candidate;
   }
   else 
   {
       return -1;
   }
}
        


// { Driver Code Starts.

int main(){

    int t;
    scanf("%d", &t);

    while(t--){
        int n;
        scanf("%d", &n);
        int arr[n];
        
        for(int i = 0;i<n;i++){
            scanf("%d", &arr[i]);
        }
        printf("%d\n", majorityElement(arr, n));
    }

    return 0;
}
  // } Driver Code Ends