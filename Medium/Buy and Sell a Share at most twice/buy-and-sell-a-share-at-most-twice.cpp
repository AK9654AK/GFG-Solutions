//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int maxProfit(vector<int>&price){
   int buy1 = INT_MAX, sell1 = 0, buy2 = INT_MAX, sell2 = 0;

    for (int p: price) {
        buy1 = min(buy1, p);
        sell1 = max(sell1, p - buy1);
        buy2 = min(buy2, p - sell1);
        sell2 = max(sell2, p - buy2);
    }

    return sell2;

}

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        cout<<maxProfit(price)<<endl;
    }

}

// } Driver Code Ends