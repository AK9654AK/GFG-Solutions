//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    long long countWays(int n)
    {
        
        long long mod=pow(10,9)+7;
        
        if(n==1)return n;
        if(n==2)return 2;
        
        long long first=1;long long second=2;
        long long third=4;
        for(int i=3;i<=n;i++){
            long long sum=(first+second+third)%mod;
            first=second;
            second=third;
            third=sum;
            
            
        }
        return second%mod;
        
    }
};


//{ Driver Code Starts.
int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}

// } Driver Code Ends