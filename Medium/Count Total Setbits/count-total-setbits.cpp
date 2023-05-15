//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    
          int countBits(long long N) {
    int count=0;
    vector<int>dp(N+1,0);  
    for (int i=1;i<=N;i++){
        dp[i]=dp[i>>1]+(i&1);
        count+=dp[i];
    }
    return count;

    }
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        long long N;
        scanf("%lld",&N);
        
        Solution obj;
        long long res = obj.countBits(N);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends