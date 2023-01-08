//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        
        int disx=-1;
        int disy=-1;
       
        int result=INT_MAX;
        
        for(int i=0;i<n;i++){
            
            if(a[i]==x ){
              disx=i;}
            if(a[i]==y){disy=i;}
            if(disx!=-1&&disy!=-1){
                result=min(result,abs(disx-disy));
                }
            
            
            
            
        }
        
        
        if(disx==-1 || disy==-1)return -1;
        
        
        
        return result;
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends