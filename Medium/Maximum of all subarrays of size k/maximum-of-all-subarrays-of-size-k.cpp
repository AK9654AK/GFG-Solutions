//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution
{
    
   
    
  public:
    
    vector <int> max_of_subarrays(int *arr, int n, int k){
      vector<int>abhi;
    multiset<int>window;
    for (int i=0;i<k;i++)window.insert(arr[i]);
    for (int i = 0; i + k <= n; i++) {
        abhi.push_back(*window.rbegin());
        window.erase(window.find(arr[i]));
        if(i+k<n){
            window.insert(arr[i+k]);
        }
    }

    return abhi;
}
  
};

//{ Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    Solution ob;
	    vector <int> res = ob.max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends