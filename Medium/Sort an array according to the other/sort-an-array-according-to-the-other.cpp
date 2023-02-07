//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h> 
using namespace std;


// } Driver Code Ends
//User function template in C++


class Solution{
    public:
    // A1[] : the input array-1
    // N : size of the array A1[]
    // A2[] : the input array-2
    // M : size of the array A2[]
    
    //Function to sort an array according to the other array.
    vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) 
    {
        
    //   int hash[1000000];
    //   vector<int>abhi;
    //   vector<int>abhi2;
    //   for(int i=0;i<A1.size();i++){
           
    //         hash[A1[i]]++;
            
           
    //   }
        
    //     for(int i=0;i<=A2.size();i++){
            
          
    //     //   if(hash[A2[i]]==0)abhi2.push_back(A2[i]);
    //         while(hash[A2[i]]--){
    //             abhi.push_back(A2[i]);
    //       }}
              
          
          ///////// Giving Wrong Output;
          
//           For Input: 
// 11 4
// 2 1 2 5 7 1 9 3 6 8 8
// 2 1 8 3
// Your Output: 
// 2 2 1 1 8 8 3 0 0 0 4113
// Expected Output: 
// 2 2 1 1 8 8 3 5 6 7 9
// Output Difference
// 2 2 1 1 8 8 3 05 06 07 41139
          
          
          
          
            
            
            
            
        //     sort(abhi2.begin(),abhi2.end());
            
        // int size=abhi2.size();
        // int i=0;
        
        //         while(size--){
                 
        //          abhi.push_back(abhi2[i]);
        //          i++;
                
        //     }
            
        
        
        // return abhi;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
      
     vector<int>v;
       map<int,int>m1;
     for(int i=0;i<N;i++){
   m1[A1[i]]++;
    }

    for(int i=0;i<M;i++){
    if(m1[A2[i]]>=1){
     while(m1[A2[i]]--){
    v.push_back(A2[i]);
   }
   m1.erase(A2[i]);
   }
   }

   for(auto x:m1){
   while(x.second--){
  v.push_back(x.first);
  }}
  

return v;
        
        
        
        
        
        
        
        
     
    
    
    
   }
    
    
    
    
    
    
    
    
    
    
   
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};

//{ Driver Code Starts.

int main(int argc, char *argv[]) 
{ 
	
	int t;
	
	cin >> t;
	
	while(t--){
	    
	    int n, m;
	    cin >> n >> m;
	    
	    vector<int> a1(n);
	    vector<int> a2(m);
	    
	    for(int i = 0;i<n;i++){
	        cin >> a1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> a2[i];
	    }
	    
	    Solution ob;
	    a1 = ob.sortA1ByA2(a1, n, a2, m); 
	
	   
	    for (int i = 0; i < n; i++) 
		    cout<<a1[i]<<" ";
		
	    cout << endl;
	    
	    
	}
	return 0; 
} 

// } Driver Code Ends