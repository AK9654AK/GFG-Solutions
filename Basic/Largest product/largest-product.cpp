//{ Driver Code Starts
#include <iostream>
using namespace std;
#define ll long long

ll findMaxProduct(int A[], int n, int k);

int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int k;
		cin>>k;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
	
		cout<<findMaxProduct(a,n,k)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/*You are required to complete the function*/

long long findMaxProduct(int A[], int n, int k)
{
   
     long long maxi=-9999999999;
        for(int i=0;i<=n-k;i++)
        {
            long long prod=1;
            for(int j=i;j<i+k;j++)prod=prod*A[j];
            maxi=max(maxi,prod);
        }
        return maxi;

}

