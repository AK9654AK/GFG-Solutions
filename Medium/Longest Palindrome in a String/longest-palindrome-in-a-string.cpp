//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  bool isPalindrome(string S,int l,int r)
    {
        while(l<r)
        {
            if(S[l]!=S[r])
            {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
    string longestPalin (string S) {
        // code here
        
        int len =S.size();
        if(len == 1)return S;
        string res="";
        int maxLength = INT_MIN;
        pair<int,int> pair;
        for(int i = 0;i< S.size(); i++)
        {
            for(int j = S.size()-1 ; j >i; j--)
            {   
                if(isPalindrome(S,i,j))
                {
                    int curr_length = j-i+1;
                    if(maxLength < curr_length)
                    {
                        maxLength=curr_length;
                        pair.first=i;
                        pair.second=j;
                        break;
                    }
                }
            }
            if(maxLength > (len-i))
            {
                break;
            }
        }
        if(maxLength==INT_MIN)
        {
            res+=S[0];
            return res;
        }
        res=S.substr(pair.first,pair.second-pair.first+1);
        return res;
    }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends