//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> solveQueries(int N, int num, vector<int> &A, vector<vector<int>> &Q) {
        
        map<int,int>m;
        vector<int>ans;
        vector<int>v(N-1);
        for(int i=N-1;i>=0;i--){
            m[A[i]]++;
            v[i]=m[A[i]];
        }
        for(int i=0;i<Q.size();i++){
            int c=0;
            for(int j=Q[i][0];j<=Q[i][1];j++){
                if(v[j]==Q[i][2])c++;
            }
            ans.push_back(c);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends