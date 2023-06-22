//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        
        
        vector<int>v;
        int t=0;
        int b=r-1;
        int l=0;
        int right=c-1;
        
        int dir=0;
        
        int i;
        
        
        
        while(t<=b && l<=right){
            
            if(dir==0){
                
                for(i=l;i<=right;i++)v.push_back(matrix[t][i]);
                t++;
                
            }
            
            else  if(dir==1){
                
                for(i=t;i<=b;i++)v.push_back(matrix[i][right]);
                right--;
                
            }   
            
            
            
            
            
            
            
            
            
            
            
            
            
            
    
            
            
            
            // https://www.youtube.com/watch?v=1ZGJzvkcLsA
            
            
            
            
            // https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbHRsY19fcExmLVVpTk9KaWpXZDAyMDRZUGFEd3xBQ3Jtc0tsLU1MajBJUlRUNFpDZGRsVlVMVkpwWTVKZUptQmR4SklsanpWSG0xOXk4b2E2akpsd2J2d1R2cThmVE8yNV9rMElIa25HVGxjMW1Qa3E3NzZxeEY2dURDSVlqa2VJcE5nNnVTQVd1UTl5UnNDQ2VNcw&q=https%3A%2F%2Fdrive.google.com%2Fopen%3Fid%3D1akKsidC1p2iSWiEP_jwUfQO-AlFLUaFS&v=1ZGJzvkcLsA
            
            
            
            
            
            
            
            
            
            
            else  if(dir==2){
                
                for(i=right;i>=l;i--)v.push_back(matrix[b][i]);
                b--;
                
            }
            
            else  if(dir==3){
                
                for(i=b;i>=t;i--)v.push_back(matrix[i][l]);
                 l++;
                
            }
            
            dir=(dir+1)%4;
            
        }
        
        return v;
        }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
//         vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    
//     int T,B,L,R,dir;
//     T=0;
//     B=A.size()-1;
//     L=0;
//     R=A[0].size()-1;
//     dir=0;
//     int i;
//     vector<int> ans;
    
//     while(T<=B && L<=R)
//     {
//         if(dir==0)
//         {
//             for(i=L;i<=R;i++)
//                 ans.push_back(A[T][i]);
//             T++;
//         }
//         else if(dir==1)
//         {
//             for(i=T;i<=B;i++)
//                 ans.push_back(A[i][R]);
//             R--;
//         }
//         else if(dir==2)
//         {
//             for(i=R;i>=L;i--)
//                 ans.push_back(A[B][i]);
//             B--;
//         }
//         else if(dir==3)
//         {
//             for(i=B;i>=T;i--)
//                 ans.push_back(A[i][L]);
//             L++;
//         }
//         dir=(dir+1)%4;
//     }
//     return ans;
// }
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends