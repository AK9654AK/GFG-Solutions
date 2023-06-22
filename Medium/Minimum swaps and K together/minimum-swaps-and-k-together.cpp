//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
       int count=0;
        int elementsinwindow=0,maxelements=0;
        int i=0;// maximum elements in a window
        for( i=0;i<n;i++)
        {
            if(arr[i]<=k)
             count++;
        }
        //cout<<count;
        for( i=0;i<count;i++)
        {
            if(arr[i]<=k)
            {
                elementsinwindow++;
            }
        }
        //cout<<elementsinwindow;
        maxelements=elementsinwindow;
        while(i<n)
        {
            if(arr[i]<=k)
            {
                elementsinwindow++;
            }
            if(arr[i-count]<=k)
            {
                elementsinwindow--;
            }
            maxelements=max(elementsinwindow,maxelements);
            i++;
        }
        return count-maxelements;
        
    
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends