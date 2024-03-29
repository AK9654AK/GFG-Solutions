//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        
        int *abhi=new int[2]{-1};
        
        int value=0;
        int element=0;
        
        for(int i=0; i<n;i++){
            value = abs(arr[i]);
            element = arr[value-1];
            if(element > 0) arr[value-1] = -element;
            else abhi[0]=value;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>0){
                abhi[1]=i+1;
                break;
            }
        }
        return abhi;
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
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
// } Driver Code Ends