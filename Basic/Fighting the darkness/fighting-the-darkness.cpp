//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int maxDays(int arr[],int n){
        
        
        sort(arr,arr+n);
        
        return arr[n-1];
        
        
        
        
        
        
                  
    }
    
    
       
//             vector<int> vec;
    
//     for(int i=0;i<n;i++){
        
//         vec.push_back(arr[i]);
        
        
//     }


//     sort( vec.begin(), vec.end() );
// vec.erase( unique( vec.begin(), vec.end() ), vec.end() );
    
//  in
//     for(int i=0;i<vec.size();i++){
        
//         a
        
//     }
    
        
        
        
        

//     }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.

int main() 
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout << ob.maxDays(arr, n) << "\n";
    }
    return 0;
}
// } Driver Code Ends