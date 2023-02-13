//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
    
        vector<int>abhi;
        abhi.push_back(1);
        for(int j=2;j<=N;j++){
            int carry=0;
            for(int i=0;i<abhi.size();i++){
                int val=abhi[i]*j+carry;
                abhi[i]=val%10;
                carry=val/10;
            }
            while(carry){
                abhi.push_back(carry%10);
                carry/=10;
            }
        }
        reverse(abhi.begin(),abhi.end());
        return abhi;
        
        
        
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends