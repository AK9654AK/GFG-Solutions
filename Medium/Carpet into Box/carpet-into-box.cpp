//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int carpetBox(int A, int B, int C, int D){
        
        
        
        
        if((A<=C&&A<=D) && (B<=C&&B<=D)
        return 0;
        
        
        int oldA=A;int oldB=B;int ans=0;int ans1=0;
        
        while(A>C){
            A/=2;ans++;}   //Check for A and C,D then 
            
        while(B>D){
            B/=2;ans++;}
            
            
        while(oldA>D){
            oldA/=2;ans1++;
        }                        // Chck for B
        while(oldB>C){
            oldB/=2;ans1++;}
        
        return min(ans1,ans);
            
        
        
    }
};


//{ Driver Code Starts.


int main(){
    int t;
    cin>>t;
    while(t--){
        int A,B,C,D;
        cin>>A>>B>>C>>D;
        
        Solution ob;

        int ans = ob.carpetBox(A,B,C,D);
        
        cout<<ans<<endl;
    }
}
// } Driver Code Ends