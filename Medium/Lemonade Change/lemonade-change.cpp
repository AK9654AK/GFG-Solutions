//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool lemonadeChange(int N, vector<int> &bills) {
         int five=0;
        int ten=0;
        //int tw=0;
        for(int i=0;i<N;i++)
        {
            if(bills[i]==5)
            {
                five=five+1;
            }
            if(bills[i]==10)
            {
                if(five ==0)
                {
                    return false;
                }
                ten=ten+1;
                five=five-1;
            }
            if(bills[i]==20)
            {
                //tw=tw+1;
                if(ten>0)
                {
                    ten=ten-1;
                    five=five-1;
                }
                else
                {
                    five=five-3;
                }
                if(five <0 || ten <0)
                {
                    return false;
                }
            }
            
        }
        if(five >=0 && ten >=0)
        {
            return true;
        }
        return false;
    }

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> bills(N);
        for (int i = 0; i < N; i++) cin >> bills[i];

        Solution obj;
        int ans = obj.lemonadeChange(N, bills);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends