//{ Driver Code Starts
#include <iostream>
using namespace std;
#include <stdio.h>
 
int findEquilibrium(int [], int );
 
int main() {
	int T;
	cin>>T;
	while(T--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		cout<<findEquilibrium (a,n)<<endl;
	}
	// your code goes here
	return 0;
}
// } Driver Code Ends


/* You are required to complete this method*/
int findEquilibrium(int A[], int n)
{
  
  
  int sum[n];
  sum[0]=A[0];
  for(int i=1;i<=n;i++){
      sum[i]=A[i]+sum[i-1];
  }
  int total=sum[n-1];
  int Lsum=0;
  int Rsum=0;
  for(int i=1;i<n-1;i++){
      
      Lsum=sum[i]-A[i];
      Rsum=total-sum[i];
      
      if(Lsum==Rsum)return i;
     
  }
  return -1;
  
  
  
  
  
  
  
  
  
  
  
  

  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}