//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int findMaxAverage(int arr[], int n, int k) {
      
      
         
      
      
      
        
        double sum=0;
        // double avg=INT_MIN;
        
        for(int i=0;i<k;i++){
          sum+=arr[i];
          
        }
        
        int maxval=sum;
        int index=0;
         
        for(int i=k;i<n;i++){
            sum-=arr[i-k];
            sum+=arr[i];
            
            if(maxval<sum){
                maxval=sum;
                index=i-k+1;
            }
       
            
        }
        
        return index;
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxAverage(arr, n, k);
        for (int i = ans; i < ans + k; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends