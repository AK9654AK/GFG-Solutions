//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    
	    vector<int>pf(256,0);
	    vector<int>sf(256,0);
	    int np=pat.size();
	    int ns=txt.size();
	    int ps=0;int ss=0;
	    
	    int val=0;
	    
	    for(int i=0;i<np;i++){
	        pf[pat[i]]++;
	        sf[txt[i]]++;
	        
	    }
	    int c=0;
	    if(pf==sf)c++;   ////https://www.youtube.com/watch?v=zwB1xGfnLKI
	    
	    int i=0;int j=np;
	    
	    while(j<ns){
	        sf[txt[j]]++;
	        sf[txt[i]]--;
	        if(sf==pf)c++;
	        
	        i++;j++;
	    }
	    
	    return c;
	    
	    
	    
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends