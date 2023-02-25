//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User functiom template for C++

class Solution {
  public:
    int BasicDataType(string s) {
        
         int n=s.size();
        int floatno=0,doubleno=0,intno=0,charno=0;
        if(n==1 && !isdigit(s[0])){
            charno++;
        }
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                if(n-i<=6){
                    floatno++;
                    break;
                }else{
                    doubleno++;
                }
            }
        }
        if(charno>=1){
            return sizeof(char);
        }else if(doubleno>=1){
            return sizeof(double);
        }else if(floatno>=1){
            return sizeof(float);
        }else{
            return sizeof(int);
        }
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;

        Solution ob;
        cout << ob.BasicDataType(S) << endl;
    }
}
// } Driver Code Ends