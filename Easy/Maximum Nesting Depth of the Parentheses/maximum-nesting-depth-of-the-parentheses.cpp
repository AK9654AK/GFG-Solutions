//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int maxDepth(string s) {
    
    int op=0;int cl=0;
    int maxi=INT_MIN;
    
    for(int i=0;i<s.size();i++){
        if(s[i]=='(')op++;
        else if(s[i]==')')op--;
        maxi=max(maxi,op);
    }
    
    return maxi;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        Solution obj;
        int ans = obj.maxDepth(s);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends