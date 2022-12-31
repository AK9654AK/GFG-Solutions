//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int findPosition(int n) {
        
        
        int i=0;  //It is storing the position of the 1s.
        int count=0;   //Checking the count;
        while(n>0){
            
            if((n&1)==1)    //Checking the LSB
                count++;
            i++;         
            n=n>>1;    //Right shift by 1;
            
            
            
        }
        if(count==1){     //only if the count is one;
            
            return i;
        }
        return -1;
        
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;

        cin>>N;

        Solution ob;
        cout << ob.findPosition(N) << endl;
    }
    return 0;
}
// } Driver Code Ends