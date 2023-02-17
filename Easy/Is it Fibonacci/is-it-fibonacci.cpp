//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        
        long long next=0;
        for(int i=0;i<K;i++){
            if(i==N-1)GeekNum[i];
            next+=GeekNum[i];}
        GeekNum.push_back(next);
        
        int i=0;  //pointing to first number 
        
        int j=K;   //pointing to just added character
        
        
        while(j!=N){
            
            next-=GeekNum[i];
            next+=GeekNum[j];
            GeekNum.push_back(next);
            i++;
            j++;
            
            
        }
        
       return GeekNum[N-1];    //first term is stored on 1st where as second is stored at 1....
        
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends