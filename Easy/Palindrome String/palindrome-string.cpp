//{ Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++


class Solution{
public:	




    // palcheck(int i,string )
	
	
	int isPalindrome(string S)
	{
	    
	    
	    
	    
	    int i=0;int j=S.size()-1;
	    if(j==0)return 1;
	    while(i<j){
	        
	        
	   
	        if(S[i++]!=S[j--]){
	            return false;}}
	       return true;

	        
	    
	    
	}

};

//{ Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}
// } Driver Code Ends