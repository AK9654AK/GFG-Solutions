//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++


class Solution
{

public:
    int xmod11(string x)
    {
        
        int ans=0;
        int rem=0;
        for(int i=0;i<x.size();i++){
            ans=rem*10+(x[i]-'0');
            rem=ans%11;
        }
       
    //   int even=0;int odd=0;
       
    //   for(int i=0;i<x.size();i++){
    //       if(i%2)odd+=x[i]-'0';
    //       else even+=x[i]-'0';
    //   }
       
    //     int rem=(odd-even)%11;
        
    //     if(rem>=0)return rem;
        
        return rem;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string x;
        cin>>x;
        Solution ob;
        int ans = ob.xmod11(x);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends