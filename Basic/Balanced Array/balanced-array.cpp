//{ Driver Code Starts
#include <bits/stdc++.h>
#include<stdio.h>
#include<math.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int minValueToBalance(int a[], int n)
    {
       int sum1=0;
       int sum2=0;
       
       for(int i=0;i<=(n/2)-1;i++){
           
           sum1+=a[i];
           
           
           
       }
       
       
       for(int i=(n/2);i<n;i++){
           
           sum2+=a[i];
       
       
    }
    
    return abs(sum2-sum1);}
};



//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
		Solution ob;	
		cout<<ob.minValueToBalance(a,n)<<endl;
	}
	return 0;
}
// } Driver Code Ends