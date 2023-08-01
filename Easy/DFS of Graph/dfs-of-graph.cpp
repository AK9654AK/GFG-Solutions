//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return a list containing the DFS traversal of the graph.
   public:
vector<int> dfsOfGraph(int n, vector<int> adj[]) {
        vector<bool> visited(n,false);
        vector<int> ans;
        dfs(ans,visited,adj,0);
        return ans;
    }
    
    void dfs(vector<int> &ans,vector<bool> &visited,vector<int> adj[],int node){
        if(visited[node])return;
        ans.push_back(node);
        visited[node]=true;
        for(auto nbr:adj[node]){
            dfs(ans,visited,adj,nbr);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends