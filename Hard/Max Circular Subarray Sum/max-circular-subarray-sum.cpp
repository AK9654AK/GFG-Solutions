//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // num: size of array
    //Function to find maximum circular subarray sum.
    int circularSubarraySum(int arr[], int num){
        
        
       int total = 0, maxsum = INT_MIN, curmax = 0, minsum = INT_MAX, curmin = 0;
    for (int i=0;i<num;i++) {
        curmax = max(arr[i], curmax + arr[i]);  //update the current max subarray sum
        maxsum = max(maxsum, curmax); //update the overall max subarray sum
        curmin = min(arr[i], curmin + arr[i]);  //update the current min subarray sum
        minsum = min(minsum, curmin); //update the overall min subarray sum
        total += arr[i];
    }
    if(maxsum>0) return max(maxsum,total-minsum);
        else return maxsum;  //when negative
    }
};

//{ Driver Code Starts.

int main()
 {
	int T;
	
	//testcases
	cin>> T;
	
	while (T--)
	{
	    int num;
	    
	    //size of array
	    cin>>num;
	    int arr[num];
	    
	    //inserting elements
	    for(int i = 0; i<num; i++)
	        cin>>arr[i];
	        
	    Solution ob;
	    //calling function
	    cout << ob.circularSubarraySum(arr, num) << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends