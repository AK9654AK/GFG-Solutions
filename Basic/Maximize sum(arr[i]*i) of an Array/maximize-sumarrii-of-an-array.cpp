//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int Maximize(int a[],int n)
    {
        int mod=pow(10,9)+7;
        long long int sum=0;
        sort(a,a+n);
        for(long long int i=0;i<n;i++){ 
            //we have to declare int as long long otherwise test case will fail.            
            sum+=(a[i]*i)%mod;
            
            
            
        }
        
        return sum%mod;
        
    }
};

//{ Driver Code Starts.
int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<<ob.Maximize(a,n)<<endl;
    }
}
// } Driver Code Ends