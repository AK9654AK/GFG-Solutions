//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      
      
      if(N==0)return 0;
      if(N==1)return 1;
    //   if(arr.size()==0)return 0;
      
      sort(arr,arr+N);
    //   arr.erase(unique(arr,arr+N),arr+N);
      
      int count=0;
      int temp=1;
      
      
      for(int i=1;i<N;i++){
          
          if(arr[i]==arr[i-1]+1){
              temp++;
            //   count=max(count,temp);
              
          }
          else if(arr[i]!=arr[i-1]){count=max(count,temp);
          temp=1;
              
          }
          
          
      }
      
      count=max(count,temp);
      return count;
      
      
      
      
      
    //     int temp[100000]={0};
    //   int maxIndex=0;
    //   for(int i=0;i<N;i++){
    //       temp[arr[i]]=1;
    //       maxIndex=max(maxIndex, arr[i]);
    //   }
    //   int maxCount=0; int count=0;
    //   for(int i=1;i<=maxIndex;i++){
    //       if(temp[i])
    //           count++;
    //       else
    //           count=0;
    //       maxCount=max(maxCount, count);
    //   }
    //   return maxCount;
      
      
      
      
      
      
      
      
    }
};

//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends