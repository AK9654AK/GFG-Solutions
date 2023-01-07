//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
      
      
      int res=0;
      for(int i=1;i<n;i++){
          
          long long res=0;int lmax[n];
          int rmax[n];
          
          lmax[0]=arr[0];
          for(int i=1;i<n;i++)
            lmax[i]=max(arr[i],lmax[i-1]);
          
          rmax[n-1]=arr[n-1];
          for(int i=n-2;i>=0;i--)
            rmax[i]=max(arr[i],rmax[i+1]);
          
          
          for(int i=1;i<n-1;i++){
              
              res=res+min(lmax[i],rmax[i])-arr[i];
              
          }
          return res;
      }



// long long trappingWater(int arr[], int n){
//     long long res = 0;
//     int lMax = 0, rMax = 0, l = 0, r = n-1;
//     while(l <= r) {
//         if(arr[l] <= arr[r]) {
//             if(arr[l] > lMax) lMax = arr[l];
//             else res += lMax - arr[l];
//             l++;
//         } else {
//             if(arr[r] > rMax) rMax = arr[r];
//             else res += rMax - arr[r];
//             r--;
//         }
//     }
//     return res;
// }
    
    
    
    // https://youtu.be/m18Hntz4go8
    
    
    
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends