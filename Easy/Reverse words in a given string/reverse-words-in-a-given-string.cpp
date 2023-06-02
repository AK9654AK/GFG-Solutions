//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{  
    public:
    //Function to reverse words in a given string.
    string reverses(string S,int low, int high){
    while(low<=high){
        swap(S[low],S[high]);
        low++;
        high--;
    }
    
    
    
}


    string reverseWords(string S) 
    { 
        
      reverse(S.begin(), S.end());
       int j=0;
       for(int i=0; i<=S.size(); i++){
           if(S[i] == '.' || i == (S.size())){
               reverse(S.begin()+j, S.begin()+i);
               j = i+1;
           }
       }
       return S;
}

        
           
   




    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    //   void reverses(string S,int low,int high){
            
    //         while(low<high){
                
    //             swap(S[low++],S[high--]);
                
                
    //         }
    //     }

    
    
    
    // string reverseWords(string S) 
    // { 
        
        
    //     int start=0;
        
        
    //     for(int i=0;i<S.size()-1;i++){
            
    //         if(S[i]=='.'){
                
                
    //             reverses(S,start,i-1);
    //             start=i+1;
                
                
    //         }
    //     }
        
    //     reverses(S,start,S.size()-1);
    //     reverses(S,0,S.size()-1);
        
    //     return S;
        
                      
      
        
        
    //      string temp="";    // temp string
    //   string result="";  // this is our resulting string
    //   for(int i=S.length()-1; i>=0; i--)
    //   {
    //       if(S[i]=='.')
    //       {
    //           temp=temp+S[i];
    //           result=result+temp;
    //           temp="";
    //       }
    //       else
    //       {
    //           temp=S[i]+temp;
    //       }
    //   }
       
    //   result=result+temp;
    //   return result;
        
        
        
        
        
        
        
        
    
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends