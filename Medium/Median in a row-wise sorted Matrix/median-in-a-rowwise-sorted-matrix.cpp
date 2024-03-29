//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &matrix, int R, int C){
        int mini=INT_MAX, maxi=INT_MIN,res;
       for(int i=0;i<R;i++)
       {
           mini=min(mini,matrix[i][0]);
           maxi=max(maxi,matrix[i][C-1]);
       }
       int x=(R*C+1)/2;
       while(mini<=maxi)
       {
           int mid=mini+(maxi-mini)/2;
           int count=0;
           for(int i=0;i<R;i++)
           count+=upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
           if(count<x)
           mini=mid+1;
           else
           {
               res=mid;
               maxi=mid-1;
           }
       }
       return res;
   }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        int ans=-1;
        ans=obj.median(matrix, r, c);
        cout<<ans<<"\n";        
    }
    return 0;
}
// } Driver Code Ends