//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution {
  public:
    int romanToDecimal(string &str) {
        
        unordered_map<char,int>hash;
        int ans=0;
        
        hash['I']=1;
         hash['V']=5;
          hash['X']=10;
           hash['L']=50;
            hash['C']=100; 
             hash['D']=500;
               hash['M']=1000;
               
               
               for(int i=0;i<str.size();i++){
                   if(hash[str[i]]<hash[str[i+1]])ans-=hash[str[i]];
                   else ans+=hash[str[i]];
               }
               
            return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution ob;
        cout << ob.romanToDecimal(s) << endl;
    }
}
// } Driver Code Ends