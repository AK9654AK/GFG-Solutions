//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
  bool is_prime(long long n){       

        if(n==2)return true;

        for(long long i=2;i*i<=n;i++){
            if(n%i==0)
                return false;
        }
        return true;

    }

    vector<int> threeDivisors(vector<long long> query, int q){

        vector<int>v(q,0);
        
        for(int i=0;i<q;i++){
        int x=query[i];
            
            for(int j=2;j*j<=x;j++){
                if(is_prime(j)){
                    
                    v[i]++;
                }
            }
        }
        return v;
    }

};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends