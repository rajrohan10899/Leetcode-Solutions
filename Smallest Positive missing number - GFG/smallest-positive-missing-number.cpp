//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to find the smallest positive number missing from the array.
    int missingNumber(int arr[], int n) 
    { 
        // Your code here
    //int n = nums.size(); //check which number is missing from 1 to n.
     for(int  i = 0; i<n; i++) {
       int element = arr[i];
       
       if(element >= 1 && element <= n){
         int chair = element -1;
 
       if(arr[chair]  != element) {
         swap(arr[chair], arr[i]);
         i--;
        }
       }
     }
     //iterate over yur elements
     for(int  i = 0; i<n; i++) {
       if(i+1!=arr[i]) return i+1;
     }
     return n+1;
    } 
};

//{ Driver Code Starts.

int missingNumber(int arr[], int n);

int main() { 
    
    //taking testcases
    int t;
    cin>>t;
    while(t--){
        
        //input number n
        int n;
        cin>>n;
        int arr[n];
        
        //adding elements to the array
        for(int i=0; i<n; i++)cin>>arr[i];
        
        Solution ob;
        //calling missingNumber()
        cout<<ob.missingNumber(arr, n)<<endl;
    }
    return 0; 
} 
// } Driver Code Ends