//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
 
        vector<int> v;
         
        
        for(int i=0;i<n;i++)v.push_back(arr1[i]);
        for(int i=0;i<m;i++)v.push_back(arr2[i]);
        
        sort(v.begin(),v.end());
        v.erase( unique( v.begin(), v.end() ), v.end() );
        
        return v;
        
        
//         class Solution

// {

//     //Function to return a list containing the union of the two arrays.

//     public static ArrayList<Integer> findUnion(int arr1[], int arr2[], int n, int m)

//     {

//         // add your code here

//         ArrayList<Integer> al  = new ArrayList<Integer>();

//       HashMap<Integer,Integer> map =new HashMap<Integer,Integer>();

//         for(int i = 0;i<n;i++){

//           if(!map.containsKey(arr1[i])){

//         al.add(arr1[i]);

//         map.put(arr1[i],1);

//     }

//     }

//         for(int j=0;j<m;j++){

//           if(!map.containsKey(arr2[j])){

//         al.add(arr2[j]);

//         map.put(arr2[j],1);

//             }

//         }

//         Collections.sort(al);

//         return al;

//     }

// }
    }
};

//{ Driver Code Starts.

int main() {
	
	int T;
	cin >> T;
	
	while(T--){
	    
	    
	    
	    int N, M;
	    cin >>N >> M;
	    
	    int arr1[N];
	    int arr2[M];
	    
	    for(int i = 0;i<N;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<M;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    vector<int> ans = ob.findUnion(arr1,arr2, N, M);
	    for(int i: ans)cout<<i<<' ';
	    cout << endl;
	    
	}
	
	return 0;
}
// } Driver Code Ends