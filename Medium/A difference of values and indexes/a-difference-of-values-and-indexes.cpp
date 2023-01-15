//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 



// } Driver Code Ends
class Solution{
  public:
          int maxDistance(int arr[], int n) 
    { 
        
        
        int maxi=INT_MIN;
        int mini=INT_MAX;
        int min2=INT_MAX;
        int max2=INT_MIN;
        
        for(int i=0;i<n;i++){
                                   
            mini=min(mini,arr[i]+i);   //for case when a[j]>a[i];
            
            maxi=max(maxi,arr[i]+i);   
            
            min2=min(min2,arr[i]-i);   //for case when a[i]>a[j];
            max2=max(max2,arr[i]-i);
            
                                         /// https://www.youtube.com/watch?v=Xs6zall-rJg
        }
        
        return max(maxi-mini,max2-min2);
        
    } 
    
};

//{ Driver Code Starts.
int main() 
{ 
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i = 0; i<n; i++)
	        cin>>arr[i];
	    Solution obj;
	    cout<<obj.maxDistance(arr, n)<<endl;
	}
} 

// } Driver Code Ends