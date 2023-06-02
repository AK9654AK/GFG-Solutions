//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution{
public:
   int MAX_SIZE=1e6;
    vector<int> primes;
    void precompute(){
        // using sieve of eratosthenes in O(N) TC
        vector<bool> isPrime(MAX_SIZE,true);
        vector<int> SPF(MAX_SIZE);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i<MAX_SIZE;i++){
            if(isPrime[i]){
                primes.push_back(i);
                SPF[i]=i;
            }
            for(int j=0; j<primes.size() and i*primes[j]<MAX_SIZE and primes[j]<=SPF[i]; j++){
                isPrime[i*primes[j]]=false;
                SPF[i*primes[j]]=primes[j];
            }
        }
    }
    
    void dfs(vector<vector<int>> &g, vector<bool> &vis, int s, int &currConn){
        // base case
        if(vis[s])  return;
        // calling recursion
        vis[s]=true;
        for(int u: g[s]){
            if(!vis[u]){
                currConn++;
                dfs(g,vis,u,currConn);
            }
        }
    }
    
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // first precomputing primes upto 1e6
        // using dfs to find max connected graph size
        vector<bool> vis(n+1,false);
        int maxConn=1;
        for(int i=1;i<=n;i++){
            if(!vis[i]){
                int currConn=1;
                dfs(g,vis,i,currConn);
                maxConn=max(currConn,maxConn);
            }
        }
        if(maxConn==1)
            return -1;
        return primes[maxConn-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends