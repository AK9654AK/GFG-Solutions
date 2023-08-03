//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
       vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
      vector<vector<pair<int,int>>> adj(N);
        for(int i=0;i<M;i++){
            adj[edges[i][0]].push_back({edges[i][1],edges[i][2]});
        }
        vector<int> inDegree(N,0);
        for(int i=0;i<N;i++){
            for(auto it:adj[i]){
                inDegree[it.first]++;
            }
        }
        queue<int> q;
        for(int i=0;i<N;i++){
            if(inDegree[i]==0){
                q.push(i);
            }
        }
        vector<int> topo;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            topo.push_back(node);
            for(auto it:adj[node]){
                inDegree[it.first]--;
                if(inDegree[it.first]==0){
                    q.push(it.first);
                }
            }
        }
        vector<int> dist(N,INT_MAX);
        dist[0]=0;
        for(int i=0;i<N;i++){
            if(dist[topo[i]]!=INT_MAX){
                for(auto it:adj[topo[i]]){
                    if(dist[topo[i]]+it.second<dist[it.first]){
                        dist[it.first]=dist[topo[i]]+it.second;
                    }
                }
            }
        }
        for(int i=0;i<N;i++){
            if(dist[i]==INT_MAX){
                dist[i]=-1;
            }
        }
        return dist;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends