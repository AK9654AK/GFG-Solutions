//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
vector<int> delrow{-1, 0, +1, 0};
    vector<int> delcol{0, -1, 0, +1};
public:
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int i, j, n = board.size(), m = board[0].size();
        int idx{0};
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for(i = 0;i<n;i++){
            for(j = 0;j<m;j++){
                if(board[i][j] == word[0]){
                    idx = 0;
                    queue<vector<int>> que;
                    que.push({i, j, 0});
                    while(!que.empty()){
                        auto elem = std::move(que.front());
                        que.pop();
                        int ro = elem[0];
                        int cl = elem[1];
                        idx = elem[2];
                        ++idx;
                        if(idx >= word.length()){
                            return 1;
                        }
                        vis[ro][cl] = 1;
                        for(int l = 0;l<4;l++){
                            int row = delrow[l] + ro;
                            int col = delcol[l] + cl;
                            if(row >= 0 && row < n && col >= 0 && col < m && board[row][col] == word[idx]
                            && !vis[row][col]){
                                que.push({row, col, idx});
                            }
                        }
                    }
                }
            }
        }
        
        return 0;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>board(n, vector<char>(m, '*'));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				cin >> board[i][j];
		string word;
		cin >> word;
		Solution obj;
		bool ans = obj.isWordExist(board, word);
		if(ans)
			cout << "1\n";
		else cout << "0\n";
	}
	return 0;
}
// } Driver Code Ends