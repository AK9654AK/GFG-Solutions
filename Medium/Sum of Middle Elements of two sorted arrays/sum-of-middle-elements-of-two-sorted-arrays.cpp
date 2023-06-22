//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
      int index1 = 0;
    int index2 = 0;
    int med1 = 0;
    int med2 = 0;

    int m = n;
    int totalSize = n + m;
    int divide = totalSize / 2;

    for (int i = 0; i <= divide; i++) {
        med1 = med2;

        if (index1 < n && (index2 >= m || ar1[index1] <= ar2[index2])) {
            med2 = ar1[index1];
            index1++;
        } else {
            med2 = ar2[index2];
            index2++;
        }
    }

    if (totalSize % 2 == 0) {
        return med1 + med2;
    }

    return med2 * 2;
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends