//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxIndexDiff(int arr[], int n) {
    
    int maximum=0;
    
//   int i=0;int j=n-1;
   for(int i=0;i<n;i++){
       
   int j=n-1;
   while(i<j){
       
       if(arr[i]<=arr[j]){
           
           maximum=max(maximum,j-i);
           break;
       }
       
       j--;
   }
   }
    return maximum;
   
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.maxIndexDiff(a, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends