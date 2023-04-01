//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
  
     bool prime(int n){
         
         if(n==2 || n==3 )return true;
         
         for(int i=5;i<n;i++){
             if(n%i==0)return false;
             
         }
         return true;
         
     }
  
  
    bool isPrimeString(int N, string str)
    {
        int sum=0;
        for(int i=0;i<N;i++){
            sum+=int(str[i]);
        }
        
        return prime(sum);
    	
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        string str;
        int n;
        cin>>n>>str;
        Solution ob;
        if (ob.isPrimeString(n, str))
            cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
    }
	return 0;
}


// } Driver Code Ends