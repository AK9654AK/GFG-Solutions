//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int resmin=A[0],resmax=A[0];      // can also use the sort function to sort and then add a[0]and a[N-1];
    	for(int i=1;i<N;i++){
    	    
    	    if(A[i]>resmax)resmax=A[i];
    	    if(A[i]<resmin)resmin=A[i];   
    	}
    	return (resmax+resmin);
    	
    	
    	
    	
    	
    	
    	
    	
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends