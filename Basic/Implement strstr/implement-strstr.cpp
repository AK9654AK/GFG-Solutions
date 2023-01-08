//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends


//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
    
    int count;
    
     for(int i = 0; i < s.size(); ++i) {
     count = 0;
     if(x[0] == s[i]) {
     count = 1;
      for(int j = 1; j < x.size(); ++j) {
                 
      if(x[j] == s[i+j])count = 1; 
         else{
        count= 0;
         break;
         }             //https://www.w3schools.blog/c-check-if-string-contains-substring#:~:text=
        //              string%20str%20(%22There%20are%20two,%7B%20%2F%2F..%20found.%20%7D
        }
     if(count == 1) return i;
         }
     }
     
     return -1;
     
    //  // int strstr(String s, String x)

    // {

    //     return s.indexOf(x);

    // }
     
}