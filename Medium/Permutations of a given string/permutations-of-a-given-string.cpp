//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		 vector<string>ans;
    void solve(string &s,string perm){
        if(perm.size()==s.size()){
           if(find(ans.begin(),ans.end(),perm)==ans.end())
                ans.push_back(perm);
            return ;
        }
        for(char &ch:s)
            if(ch!=' '){
                char temp=ch;
                ch=' ';
                solve(s,perm+temp);
                ch=temp;
            }
    }
vector<string>find_permutation(string s)
{
    sort(s.begin(),s.end());
    solve(s,"");
    return ans;
}
};



//{ Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--)
    {
	    string S;
	    cin >> S;
	    Solution ob;
	    vector<string> ans = ob.find_permutation(S);
	    for(auto i: ans)
	    {
	    	cout<<i<<" ";
	    }
	    cout<<"\n";
    }
	return 0;
}

// } Driver Code Ends