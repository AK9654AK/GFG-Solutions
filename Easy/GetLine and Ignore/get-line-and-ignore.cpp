//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;

// Function prototype
void getLineAndIgnore();


// } Driver Code Ends
//User function Template for C++

//Back-end complete function Template for C++

// Function to take input of string using getline
void getLineAndIgnore(){
    
    string a;
   for(int i=0; i<3; i++){
   getline(cin,a);
   cout << a<<endl;
   }
}

//{ Driver Code Starts.

// Driver Code
int main()
{
    // Number of testcase input
    int t;
    cin >> t;
    cin.ignore(); //Ignoring the newline so it isn't consumed by getline. Read about it!!
    while(t--){
        getLineAndIgnore();   
    }
   
    return 0;
} 
// } Driver Code Ends