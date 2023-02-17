//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        
        
        // bool hash[100000000]={false};
        
        // for(int i=0;i<n;i++){
            
        //     hash[arr[i]]=true;
            
        // }
        
        
        
        // for(int i=0;i<n;i++){
            
        //     if(hash[k])
            
            
        // }
        
        // int count=0;
        
        // int i=0;int j=n-1;
        // sort(arr,arr+n);
        
        // while(i<j){
        //     if(arr[i]+arr[j]==k)count++;
        //     if(arr[i]+arr[j]>k)j--;
        //     if(arr[i]+arr[j]<k)i++;
            
        // }
        
        // return 2*count;
        
        
        int count=0;
        
       unordered_map<int,int> mp;
       
       for(int i=0;i<n;i++){
           mp[arr[i]]++;
       }
       
       
       for(int i=0;i<n;i++){
           if(mp[k-arr[i]]>0){
               
               mp[arr[i]]--;
               count+=mp[k-arr[i]];
           }
       }
       return count;
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getPairsCount(arr, n, k);
        cout << ans << "\n";
    }
    
    return 0;
}
// } Driver Code Ends