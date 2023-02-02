//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    
     int max(int a,int b){
        if(a>b)return a;else return b;
    }
    
    
    
    
    
    
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        
        
        
        // int great=arr[n-1];
        vector<long long> abhi;
        // abhi.push_back(-1);
        
        // for(int i=n-2;i>=0;i--){
            
               
               
        //     great=max(arr[i+1],arr[i]);
        //     abhi.push_back(great);
            
              /////////////////////////////////////////Wrong code;///////////////////
            
            
        // }
        
        
        // for(int i=0;i<n;i++){
        //     arr[i];
        // }
        
        
        
        stack<long long> st;
        abhi.push_back(-1);
        st.push(arr[n-1]);
        for(long long i=n-2;i>=0;i--){          /// USE LONG LONG
            while(!st.empty() && (st.top()<=arr[i]))
            st.pop();
            
            if(st.empty()){
                abhi.push_back(-1);
                st.push(arr[i]);
            }
            else{   //Striver SDE SHEET
                abhi.push_back(st.top());
                st.push(arr[i]);
            }
        }
        
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
            
        //   if(st.size()==0)abhi.push_back(-1);  // If its empty just put -1 to array/
        //     else if(st.size()>0 && st.top()>arr[i]) 
        //             abhi.push_back(st.top());  // If the condition is met then just put the top to array abhi
        //     else if(st.size()>0 && st.top()<=arr[i]){
        //           // if not greater then 
        //         while(st.size()>0 && st.top()<=arr[i])
        //               st.pop();
        //         if(st.size()==0)abhi.push_back(-1);
        //         else abhi.push_back(st.top());
            
        // }
        
        // st.push(arr[i]);
        // }
        
        
        
        reverse(abhi.begin(),abhi.end());
        
        return abhi;
        
        
        
        
        
        
        
//         stack<long long> st;
// vector<long long> vec(n,-1);
// for(int i=0;i<n;i++){
//     while (st.size()!=0 && arr[i]>arr[st.top()]){
//           vec[st.top()]=arr[i];
//           st.pop();
//     }
//     st.push(i);
// }
// return vec;
        
        
        
        
        
        
        
        
        
        
        
        
        
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
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends