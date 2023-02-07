//{ Driver Code Starts
//Initial Template for C++



#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
        // Function to return the length of the
        //longest subarray with ppositive product
        int maxLength(vector<int> &arr,int n){
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         
         int pro=1;   
         int temp=0;  
         int ans=0;
         
         // Traversing from forward dirction in array
         for(int i=0;i<n;i++){
        if(arr[i]==0){     //Initialize everything as starting as 
        //we are not taking 0. It will make whole subarray 0
                 pro=1;
                 temp=0; 
                 continue;
             }
             else if(arr[i]<0){
                 pro*=-1;
             }
             else {
                 pro*=1;
               
             }
             temp++;
            if(pro>0) ans=max(ans,temp);  //Only when the product is postive ;
         }
        
        
        //Traversing in backward direction as it may be the case like
        // in [-1,2,3,4] would be 0 and  from backward traversal answer would be 4; 
             temp=0;
             pro=1;
             for(int i=n-1;i>=0;i--){
                 if(arr[i]==0){
                 pro=1;
                 temp=0; 
                 continue;
             }
             else if(arr[i]<0){
                 pro*=-1;
             }
             else {
                 pro*=1;
                }
             temp++;
             if(pro>0) ans=max(ans,temp);   //if the answer would be diffrent from 1st case, it would be updated and 
             // ans will have correct value longest substring.
                 
             }
             
             
        return ans;
         
         
         
         
         
        }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> arr(n);
	    for(int i = 0;i<n;i++){
	        cin>>arr[i];
	    }
	    Solution ob;
	    int res = ob.maxLength(arr,n);
	    cout<<res<<"\n";
	}
	return 0;
}
// } Driver Code Ends