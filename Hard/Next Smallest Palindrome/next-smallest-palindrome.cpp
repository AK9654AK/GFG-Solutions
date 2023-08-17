//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	bool isPalindrome(string s)
    {
        string temp=s;
        reverse(s.begin(),s.end());
        return (temp==s);
    }
    
    string change(string s)
    {
        int carry = 1;
        int n = s.length();
        string temp;
        for (int i = n - 1; i >= 0; i--)
        {
            int x = s[i] - '0' + carry;
            temp.push_back('0' + (x % 10));
            carry = x / 10;
        }
        while (carry)
        {
            temp.push_back('0' + (carry % 10));
            carry /= 10;
        }
        reverse(temp.begin(), temp.end());
        return temp;
    }
    
    void solveEven(string &s)
    {
        int n=s.length();
        string left=s.substr(0,n/2);
        string right=s.substr(n/2,n/2);
        string temp=left;
        reverse(temp.begin(),temp.end());
        if(temp>right)
            s=left+temp;
        else
        {
            left=change(left);
            string str=left;
            reverse(str.begin(),str.end());
            s=left+str; 
        }
        return;
    }
    
    void solveOdd(string &s)
    {
        int n=s.length();
        string left=s.substr(0,n/2);
        string right=s.substr(n/2 +1,n/2);
        string temp=left;
        reverse(temp.begin(),temp.end());
        if(temp>right)
            s=left+s[n/2]+temp;
        else
        {
            left=left+s[n/2];
            left=change(left);
            string str=left;
            str.pop_back();
            reverse(str.begin(),str.end());
            s=left+str; 
        }
        return;    
    }
    
    vector<int> generateNextPalindrome(int num[], int n) 
    {
        if(n == 1)
        {
            int now = num[0]+1;
            if(now == 10)
                return {1,1};
            return {now};
        }
        string s="";
        for(int i=0;i<n;i++)
            s+=to_string(num[i]);
        
        vector<int> ans;
        if(isPalindrome(s))
            s=to_string(1+stoi(s));
                 
        n=s.length();
        if(n%2==0)
            solveEven(s);
        else
            solveOdd(s);
        
        for(auto i:s)
            ans.push_back(i-'0');
        return ans;     
    }

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends