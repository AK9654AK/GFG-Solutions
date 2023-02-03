//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    pair<int,int> endPoints(vector<vector<int>> matrix, int R, int C){
    
    
    // previous code was givig TLE; although the code was correct
    
    
    
    
    
     pair<int,int>abhi;

        int i=0;
        int j=0;
        char a='r';
        while(i<R && j<C&& i>=0 && j>=0){
             abhi={i,j};
            if(matrix[i][j]==0){
                if(a=='r')j++;
                else if(a=='l')j--;
                else if(a=='u')i--;
                else i++;
            }else{
                matrix[i][j] =0;
                if(a=='r'){
                    i++;
                    a='d';
                }else if(a=='l'){
                    a='u';
                    i--;
                }else if(a =='u'){
                    j++;
                    a ='r';
                }else{
                    j--;
                    a = 'l';}}  }

        return abhi;

    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
        
    
};

//{ Driver Code Starts.


int main()
{
    int tc;
	scanf("%d", &tc);
	while(tc--){
		int row, col;
		scanf("%d", &row);
		scanf("%d", &col);
		vector<vector<int>> matrix(row , vector<int> (col));
	 
		for(int i = 0; i < row; i++){
			for(int j = 0; j < col; j++){
			    cin>>matrix[i][j];
			}
		}
		Solution obj;
		pair<int,int> p = obj.endPoints(matrix, row, col);
		
		cout << "(" << p.first << ", " << p.second << ")" << endl;
	}
	return 0;
}
// } Driver Code Ends