//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:





   void rotate(int arr[],int left,int right){
       int l=left; int r=right;
       while(l<r)
       {
           swap(arr[l],arr[r]);
           l++;
           r--;
       }
   }




// void leftRotate(int arr[], int n, int d) {
//         reverse(arr, arr + d);
//         reverse(arr + d, arr + n);
//         reverse(arr, arr + n);
//     }






    void leftRotate(int arr[], int n, int d) {
        
        rotate(arr,0,d-1);
        rotate(arr,d,n-1);
        rotate(arr,0,n-1);
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        cin >> d;
        Solution ob;
        ob.leftRotate(arr, n, d);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}



// } Driver Code Ends