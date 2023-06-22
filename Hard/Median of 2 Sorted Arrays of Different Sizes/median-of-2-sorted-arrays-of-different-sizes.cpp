//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
double MedianOfArrays(vector<int>& array1, vector<int>& array2);


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        int index1 = 0;
int index2 = 0;
int med1 = 0;
int med2 = 0;

int num = array1.size();
int m = array2.size();

int divide = (num + m) / 2;

for (int i = 0; i <= divide; i++) {
    med1 = med2;

    if (index1 == num) {
        med2 = array2[index2];
        index2++;
    } else if (index2 == m) {
        med2 = array1[index1];
        index1++;
    } else if (array1[index1] < array2[index2]) {
        med2 = array1[index1];
        index1++;
    } else {
        med2 = array2[index2];
        index2++;
    }
}

if ((num + m) % 2 == 0) {
    return (float)(med1 + med2) / 2;
}

return med2;
}
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        cin>>n;
        vector<int> array2(n);
        for (int i = 0; i < n; ++i){
            cin>>array2[i];
        }
        Solution ob;
        cout<<ob.MedianOfArrays(array1, array2)<<endl;
    }
    return 0; 
}



// } Driver Code Ends