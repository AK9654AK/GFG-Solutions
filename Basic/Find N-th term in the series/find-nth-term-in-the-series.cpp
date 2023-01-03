//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthOfSeries(long long int n){
        
        
        int j=0;
        long long int sum=9;
        if(n==1)return sum;
        
        
        for(int i=2;i<=n;i++){sum+=24+(16*j);
        j++;
        }
        return sum;
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthOfSeries(n) << endl;
    }
    return 0;
}

// } Driver Code Ends