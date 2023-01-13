//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int arr[], int n)
    {
        
        
        int ans=0;
        
        for(int i=0;i<n;i++)ans^=arr[i];
        
        
        return ans;
      
      
      
      
      
      
      
      
      
//         // TC ---> O(logN)     SC ---> O(1)
// 		int start=0;
//         int end=n-2;
//         while(start<=end){
//             int mid=(start+end)>>1;
//             if(arr[mid]==arr[mid^1])
//                 start=mid+1;
//             else
//                 end=mid-1;
//         }
//         return arr[start];
        
        
        
// // TC---> O(N)         SC ---> O(1)
//          int ans=0;
//          for(int i=0;i<n;i++){
//              ans^=arr[i];
//          }
//          return ans;
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends
