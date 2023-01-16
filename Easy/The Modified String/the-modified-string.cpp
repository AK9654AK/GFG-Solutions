//{ Driver Code Starts
#include<bits/stdc++.h>
#define br char xx; cin>>xx; cout<<xx<<endl;
#define lli long long int
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of characters which Ishaan must insert  
    //such that string doesn't have three consecutive same characters.
    int modified (string a)
    {
          int i=0; int j=0;
        int n=a.size();
        
        for(i=1;i<n-1;i++){

            if(a[i]==a[i-1] && a[i]==a[i+1]){
                j++;
                i++;
            }
        }

        return j;
    }
    
    
    
    
 

// int modified (string a)

//     {

        

        

//          sort(a.begin(),a.end());

//         int count=0;

        

//         int hash[256]={0};

//         int res=0;

        

        

//         for(int i=0;i<a.size();i++){

            

            

//             hash[a[i]]++;

        

//         }

        

        

//         for(int i=0;i<256;i++){

            

//             if(hash[i]>=3)count+=hash[i];

            

            

//         }

        

        

//         if(count%2==0){

            

//             count/=2;

//             res=count-1;

                

//             }

            

//             else if(count%2==1){

//                 res=count/2;

//             }

            

            

 

            

//             return res;

            

//     }

 
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    string a;
    while(t--){
        cin>>a;
        Solution obj;
        cout<<obj.modified(a)<<endl;
    }
    return 0;
}

// } Driver Code Ends