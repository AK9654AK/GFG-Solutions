//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
    
    //This question was also in the Love Babbar DSA sheet!!!!!!!!
    
    
    int diff=INT_MAX;
    
    sort(a.begin(),a.end());
    
    
    for(int i=0;i+m-1<n;i++){
        
        int diff2=0;
        diff2=a[i+m-1]-a[i];
        
        diff=min(diff,diff2);
        
        
    }
    
    return diff;
    
    
    
    // https://www.youtube.com/watch?v=T_2CATt_XyQ
    
    
    // https://www.youtube.com/watch?v=50nn3bA1BT4
    

    
    
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends