//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
  public:
    long long maxDiamonds(int A[], int N, int K) {
        multiset<int,greater<int>> ms;
        long long i,ans=0;
        for(i=0;i<N;i++) ms.insert(A[i]);
        while(K--){
            auto it=ms.begin();
            int x=*it; ans+=x;
            ms.erase(ms.find(x)); ms.insert(x/2);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,K;
        
        cin>>N>>K;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.maxDiamonds(A,N,K) << endl;
    }
    return 0;
}
// } Driver Code Ends