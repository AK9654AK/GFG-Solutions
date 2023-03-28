//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> arrayForm(int a, int b, int c) {
        
        vector<int>abhi(3);
        
            abhi[0]=a;
            abhi[1]=b;
            abhi[2]=c;
        
        // abhi.push_back(a);
        // abhi.push_back(b);
        // abhi.push_back(c);
        return abhi;
        
    }

    string stringForm(int a, int b, int c) {
       
       string temp="";
       string one=to_string(a);
       string two=to_string(b);
       string three=to_string(c);
       temp+=one+two+three;
       return temp;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        Solution obj;
        vector<int> res = obj.arrayForm(a, b, c);
        for (auto x : res) cout << x << " ";
        cout << "\n";
        cout << obj.stringForm(a, b, c) << "\n";
    }
    return 0;
}
// } Driver Code Ends