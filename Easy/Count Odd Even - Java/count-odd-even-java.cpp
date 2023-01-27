//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

void countOddEven(int a[], int n) {
    
        int e=0;
        int o=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)e++;
            else o++;
        }
        // System.out.println(o+" "+e);   
        //Shit idk why i was writing the code using cpp compiler  
        
        cout<<o<<" "<<e;
    }
        


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        countOddEven(a, n);
        cout << endl;
    }
}
// } Driver Code Ends