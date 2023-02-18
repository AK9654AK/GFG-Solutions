//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minChange(string s);

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        cout << minChange(s) << endl;
    }
return 0;
}

// } Driver Code Ends


int minChange(string S) { 
    
     
    //  int hash[26]={0};
     
    //  int ans=0;
    //  for(int i=0;i<n;i++){
        
    //     hash[S[i]-'a']++;
        
         
    //  }
    //  for(int i=0;i<26;i++){
         
    //      if(hash[i]>1)ans++;
         
         
    //  }
     
     
    //  return ans;
    
    
    int ans=0;

    sort(S.begin(),S.end());

    for(int i=0;i<S.size()-1;i++)if(S[i]==S[i+1])ans++;
    
    
    
    return ans;
    
} 
