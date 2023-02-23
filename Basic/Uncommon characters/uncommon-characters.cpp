//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            string m="";
       
       bool check1[26]={false};
       bool check2[26]={false};
       
       for(int i=0;i<A.length();i++)
       {
           check1[A[i]-'a']=true;
       }
       
       for(int i=0;i<B.length();i++)
       {
           check2[B[i]-'a']=true;
       }
       
       for(int i=0;i<=25;i++)
       {
           if((check1[i]==true&&check2[i]==false)||(check1[i]==false&&check2[i]==true))
           {
               m=m+char(i+'a');
           }
       }
       
       if( m=="")
       {
           return "-1";
       }
       
       return m;
           
       }
            
            
            
            
            
            
            
            
            
            
            
            
            
            
              
        // string ans;
        // int j=0;
        // for(int i=0;i<s.size()-1;i++){
            
        //     if(s[i]==s[i+1]){
                
        //         s[i]=32;
        //         s[i+1]=32;
        //     }
        // }
        
        
        
        // for(int i=0;i<s.size();i++){
        //     if(s[i]!=' '){
        //         ans[j++]=s[i];
        //     }
        // }
        
        
        // return ans;
            
        
};



//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends