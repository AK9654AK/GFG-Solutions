//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    void speedBreaker(double a, int b){
        
//         To set the precision in a floating-point, simply provide the number of significant figures (say n) required to the setprecision() function as an argument.
//The function will format the original value to the same number of significant figures (n in this case).
// Syntax to print significant figures 
// cout << setprecision(n) << float_variable;
  
          cout<<fixed<<setprecision(b)<<a<<endl;
//  The C++ setprecision can also be used to format only the decimal places instead of the whole floating-point or double value. This can be done using the fixed keyword before the setprecision() method. When the fixed keyword is used, the argument in the setprecision() function specifies the number of decimal places to be printed in the output.

// Syntax to print a significant number of decimal places

// cout << fixed << setprecision(n) << float_variable
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        double a;
        cin >> a;
        int b;
        cin >> b;
        Solution ob;
        ob.speedBreaker(a,b);
    }
    return 0;
}

// } Driver Code Ends