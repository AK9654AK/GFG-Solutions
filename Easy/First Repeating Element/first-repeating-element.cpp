//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template in C++

class Solution {
  public:
    // Function to return the position of the first repeating element.
    int firstRepeated(int arr[], int n) {
    
    
    
    
     unordered_map<int,int>mp;
     
     
        for(int i=n-1;i>=0;i--){       // we can left traverse it or left traverse it doesnt matter`
            
            mp[arr[i]]++;
        }
        for(int i=0;i<n;i++){                  
            
            
            if(mp[arr[i]]>1)
                return i+1;
        }
        return -1;
    
    

    
//   int hash[n];
   
   

    // int temp[n];

    // for(int i=0;i<n;i++){
        
        
    //     temp[i]=arr[i];
        
        
    // }
    
    
    // sort(temp.begin(),temp.end());
    
    // for(int i=0;i<n;i++){
        
    //     if(temp[i]==)
        
        
    // }
    
    
    
    }
};

//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; ++i) cin >> arr[i];
        Solution ob;
        cout << ob.firstRepeated(arr, n) << "\n";
    }

    return 0;
}

// } Driver Code Ends