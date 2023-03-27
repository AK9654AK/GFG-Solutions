//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int findElement(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int a[n];
        for (i = 0; i < n; i++) cin >> a[i];
        cout << findElement(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends


int findElement(int arr[], int n) {
    
    int left[n];
    int right[n];
    
    left[0]=INT_MIN;
    right[n-1]=INT_MAX;
    
    int ans=-1;
    for(int i=0;i<n;i++){
        left[i+1]=max(left[i],arr[i]);
    }
    
    for(int i=n-1;i>=0;i--){
        right[i-1]=min(right[i],arr[i]);
    }
    
    for(int i=1;i<n-1;i++){
        
        if(left[i]<=arr[i] and right[i]>=arr[i]){return arr[i];}
        
        
        
    }
    return ans;
    
   
    
    
    
    
    
    
    
    
    
    
    
}