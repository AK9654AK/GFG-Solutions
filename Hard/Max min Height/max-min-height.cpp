//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
 
    bool possible(int n,vector<int> a,int k,int w,int mid){
          ////we cannt take it as by reference, since value will get changed which will result in altered ans.
        for(int i=0;i<n;i++){ //for whole array 
            if(a[i]<mid){
                int temp = mid-a[i];   // if height is less than mid, on which were checking.
                if(temp>k)return false;  //if no. of days are not enought then return false.
                k-=temp;   //if days left
                a[i]=mid;
                for(int j=i+1;j<n and j<i+w;j++){   ///next plants i.e i+w plants will also be incresed.
                    a[j]+=temp;
                }
            }
        }
        return true;
    }
    long long int maximizeMinHeight(int n,int k,int w,vector <int> &a)
    {
        // code here
        int mx;
       // for(int i=0;i<n;i++)mn=min(mn,a[i]);
       
        int mn=*min_element(a.begin(),a.end()); //directly get the min element from the vector.
        
        mx=mn+k;
        
        
        long long int ans;
        while(mn<=mx){
            int mid = (mn+mx)/2;  //to get the mid
            if(possible(n,a,k,w,mid)){     //if possible to set the height of initial n flower, in k days daily w times against the mid days
                ans=mid;           // if yes, set ans to mid
                mn=mid+1;          //if yes, we will try too check for the large value also.
            }
            else mx=mid-1;// otherwise decrease by 1
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,w;
        cin>>n>>k>>w;
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        cout<<s.maximizeMinHeight(n,k,w,a)<<endl;
    }
    return 0;
}
// } Driver Code Ends