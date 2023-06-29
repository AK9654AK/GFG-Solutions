//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    bool func(int num){
        
        if( num == 1 || num == 7) return true;
        
        int sum;
        while( true ){
            
            sum=0;
            while(num){
                int n=num%10;
                num=num/10;
                sum+=(n*n);
            }
            
            string str = to_string(sum);
            if( sum == 1 || sum == 7 ) return true;
            if( str.length() == 1) return false;
            
            num=sum;
        }
        
    }

 


    int nextHappy(int N){
        int ans=N+1;
        
        while(true){
    
            if( func(ans) ){
                return ans;
            }
            
            ans++;
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends