//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    string removeReverse(string S){
    
    int n=S.size();
    
    vector<int> vec(26,0);
        
        for(int i=0;i<n;i++)vec[S[i]-'a']++;
        
        int st=0;
        int end=n-1;
        
        int dir=0;
        
        while(st<=end)
        {
            
            if(dir==0){
              if(vec[S[st]-'a']==1)st++;  
            
            else{
                vec[S[st]-'a']--;
                S[st]='$';   //Means removed;
                st++;
                dir=1;  //direction changed;
            }
        }
        else{
            
            if(vec[S[end]-'a']==1){
                end--;
            }
            else{
                vec[S[end]-'a']--;
                S[end]='$';
                end--;
                dir=0;
                
            }
        }
        
        }
        
        
        if(dir==1){
         reverse(S.begin(),S.end());
        }
        
        
        string ans;
        for(int i=0;i<n;i++){
            if(S[i]!='$')ans.push_back(S[i]);
        }
        
        
        return ans;
     
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends