//{ Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


// } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    
    
    bool check(int num){
        int ori=num;
        int changed=0;
        while(num){
            int dig=num%10;
            changed=changed*10+dig;
            num=num/10;
        }
        if(ori==changed)return 1;
        else return false;
        
    }



    int PalinArray(int a[], int n)
    {
    	
    	for(int i=0;i<n;i++)if(check(a[i])==false)return 0;
    	    
    	return 1;
    }
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
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}
// } Driver Code Ends