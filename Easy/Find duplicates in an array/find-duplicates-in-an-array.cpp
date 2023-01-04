//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        
        
        
        
        
        
        
        
        
        
        vector<int> ans;
        sort(arr,arr+n);
        int j=0;
        for(int i=0;i<n;i++){
            if(arr[i]==arr[i+1]){
            j++;
            ans.push_back(arr[i]);
            }
        }
        
        if(j==0)ans.push_back(-1);
        
        ans.erase( unique( ans.begin(), ans.end() ), ans.end() );
        
        
        // https://stackoverflow.com/questions/1041620/whats-the-most-efficient-way-to-erase-duplicates-and-sort-a-vector
        
        // Cheers to ramitsamanta2000.
        
        return ans;
    
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends