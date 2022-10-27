//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};


// } Driver Code Ends
//class implemented
/*
struct Item{
    int value;
    int weight;
};
*/


class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    static bool comparison(Item a ,Item b)
    {
        double v1=(double)a.value/(double)a.weight;
        double v2=(double)b.value/(double)b.weight;
        return v1>v2;
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr,arr+n,comparison);
        double ans=0;
        int curr=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i].weight+curr<=W)
            {
                curr+=arr[i].weight;
                ans+=arr[i].value;
            }
            else
            {
                int remain=W-curr;
                ans+=(arr[i].value/(double)arr[i].weight)*(double)remain;
                break;
                
            }
        }
        return ans;
        
    }
        
};
/*
struct Item{
    int value;
    int weight;
};
*/


// class Solution
// {
//      private:
//     //Function to get the maximum total value in the knapsack.
//   static bool comp(Item a, Item b) {
//     double r1 = (double)a.value / (double)a.weight;
//     double r2 = (double)b.value / (double)b.weight;
//     return r1 > r2; 
// }
// // function to return fractionalweights
// public:
// double fractionalKnapsack(int W, Item arr[], int n)
// {
//     // Your code here
    
//     sort(arr, arr + n, comp); 
    
//     int curWeight = 0; 
//     double finalvalue = 0.0; 
 
    
//     for (int i = 0; i < n; i++) {
       
//         if (curWeight + arr[i].weight <= W) {
//             curWeight += arr[i].weight;
//             finalvalue += arr[i].value;
//         }
 

//         else {
//             int remain = W - curWeight;
//             finalvalue += (arr[i].value / (double)arr[i].weight) * (double)remain;
//             break;
//         }
//     }
 
//     return finalvalue;
    
// }

// };



//{ Driver Code Starts.
int main()
{
	int t;
	//taking testcases
	cin>>t;
	cout<<setprecision(2)<<fixed;
	while(t--){
	    //size of array and weight
		int n, W;
		cin>>n>>W;
		
		Item arr[n];
		//value and weight of each item
		for(int i=0;i<n;i++){
			cin>>arr[i].value>>arr[i].weight;
		}
		
		//function call
		Solution ob;
		cout<<ob.fractionalKnapsack(W, arr, n)<<endl;
	}
    return 0;
}
// } Driver Code Ends