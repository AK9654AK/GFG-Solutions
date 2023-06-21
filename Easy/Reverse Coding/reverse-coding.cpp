//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long int mod=pow(10,9)+7;
    int sumOfNaturals(int n) {
      long long sum=0;
      
    //   for(int i=1;i<=n;i++){
          
    //       sum+=(n%mod);
          
    //   }
      
      
      
      return  (1LL*n*(n+1)/2)%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        
        cin>>n;

        Solution ob;
        cout << ob.sumOfNaturals(n) << endl;
    }
    return 0;
}
// } Driver Code Ends