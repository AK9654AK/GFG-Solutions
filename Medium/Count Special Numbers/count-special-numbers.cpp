//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> arr) {
       
       int count=0;
       
       int size=*max_element(arr.begin(),arr.end());
       
       vector<int>hash(size+1,0);
       
       for(int i=0;i<N;i++){
           if(hash[arr[i]]<=1){
               
               int num=arr[i];
               for(int j=num;j<=size;j+=num)hash[j]++;
           }
       }
       
       for(auto i:arr)if(hash[i]>1)count++;
       
       
       return count;
       
       
       
       
       
       
       
        
    //     int count=0;
    //     unordered_map<int,int>hash;
        
        
    //     for(auto i:arr)hash[i]++;
        
    //     for(int i=0;i<arr.size();i++){
    //         for(int j=0;j<hash.size();j++){
    //             if(arr[i]%hash[j]==0){count++;
    //                 if(hash->second>1)count+=(hash->second)-1;
    //             }
                
    //         }
    //     }
        
        
        
        
    //  return count;
        
        
        
        
        
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<int> arr(N);
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
        }

        Solution ob;
        cout << ob.countSpecialNumbers(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends