//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
		
	string removeDups(string S) 
	{   
	    int hash[26]={false};
	    
	    for(int i=0;i<S.size();i++){
	        
	        if(hash[S[i]-'a']==true){S.erase(i,1);
	            i--;           ///One potential issue with this implementation is that S.erase(i, 1) removes the character at index i from the string, but increments i to point to the next character in the string. This can cause the loop to skip over the next character in the string, potentially missing duplicates.
	                             //To fix this issue, we can decrement i after removing a character from the string
	        }
	        else hash[S[i]-'a']=true;
	    }
	    
	    
	    
	   // vector<string>abhi;
	   // string ans;
	   //// for(int i=0;i<S.size();i++){
	   //     abhi.push_back(S);
	   //// }
	   //abhi.erase(unique(abhi.begin(),abhi.end()),abhi.end() ); 
	    
	    
	   //  for(const auto& str:abhi) { 
    //     ans+=str;        
    // }

	    return S;
	    
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
   		cout << ob.removeDups(s) << "\n";
   		
   	}

    return 0;
}
// } Driver Code Ends