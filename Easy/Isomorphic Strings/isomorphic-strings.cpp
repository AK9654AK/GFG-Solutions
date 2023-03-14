//{ Driver Code Starts
// C++ program to check if two strings are isomorphic


#include<bits/stdc++.h>


using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        // char hash[26]={INT_MIN};
        
        // if(str1.size()!=str2.length())return false;
        
        
        // for(int i=0;i<str2.size();i++){
            
        //     if(hash[str2[i]-'a']==INT_MIN){
        //     hash[str2[i]-'a']=(str2[i]-'a')-(str1[i]-'a');
        //     }
        //     else if(hash[str2[i]-'a']!=(str2[i]-'a')-(str1[i]-'a'))return false;
        // }
        
        // int hash1[26]={INT_MIN};
        //  for(int i=0;i<str2.size();i++){
            
        //     if(hash1[str1[i]-'a']==INT_MIN){
        //     hash1[str1[i]-'a']=(str1[i]-'a')-(str2[i]-'a');
        //     }
        //     else if(hash[str1[i]-'a']!=(str1[i]-'a')-(str2[i]-'a'))return false;
        // }
        // return true;
        
          char hash[256]; 
        int n1 = str1.size();
        int n2 = str2.size();
        
        if(n1!=n2){
            return false;
        }
        
        for(int i=0;i<n1;i++){
            hash[str1[i]] = str2[i];
        }
        for(int i=0;i<n1;i++){
            if(str2[i] != hash[str1[i]]){   ///the value of mapped will be chnaged if same char is mapped differentley and hence condition gonna become false
                return false;
            }
        }
        
       
        for(int i=0;i<n1;i++){
            hash[str2[i]] = str1[i];
        }
        for(int i=0;i<n1;i++){
            if(str1[i] != hash[str2[i]]){
                return false;
            }
        }
        
        return true;
       
        
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin>>t;
    string s1,s2;
    while (t--) {
        cin>>s1;
        cin>>s2;
        Solution obj;
        cout<<obj.areIsomorphic(s1,s2)<<endl;
    }
    
    return 0;
}
// } Driver Code Ends