//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
    public:
    int bitMultiply(int N){
    
    int num=N;
    
    int count=0;
    
    
    while(N){
        
        N=N&(N-1);
        count++;
        
    }
    
    return count*num;
    
    
    }
};

//{ Driver Code Starts.
int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.bitMultiply(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends