//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        void swapDigits(string &N1, string &N2)
        {
            int i=N1.length();
            int j=N2.length();
            swap(N1[i-1],N2[0]);
            swap(N1[0],N2[j-1]);
        }
};

//{ Driver Code Starts.


int main() 
{
   	
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string N1, N2;
   		cin >> N1 >> N2;

   		
        Solution ob;
   		ob.swapDigits(N1, N2);
   		cout << N1 << " " << N2 << "\n";
   	}

    return 0;
}
// } Driver Code Ends