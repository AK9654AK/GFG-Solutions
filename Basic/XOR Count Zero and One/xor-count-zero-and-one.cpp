//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
	int find_xor(int n)
	{
	    int set=0,unset=0;
	    
	    while(n>0)
	    if(n%2==0){unset++;n=n/2;}
	    else {set++;n=n/2;}
	    
	    return  set^unset;
	    
	}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.find_xor(n);
    	cout << ans << "\n";
    }
	return 0;
}

// } Driver Code Ends