//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
   vector<vector<int>> findintervals(vector<vector<int>> &range){
        int start=range[0][0];
        int end=range[0][1];
        vector<vector<int>> ans;
        for(auto &interval:range){
            if(end < interval[0]){
                ans.push_back({start,end});
                start=interval[0];
                end=interval[1];
            }
            end=max(end,interval[1]);
        }
        ans.push_back({start,end});
        return ans;
    }
    vector<int>kthSmallestNum(int n, vector<vector<int>>&range, int q, vector<int>queries){
        //Write your code here
        sort(range.begin(),range.end());
        vector<vector<int>> intervals=findintervals(range);
        vector<pair<int,int>> v;
        int sum=0;
        for(vector<int> &interval:intervals){
            sum+=interval[1]-interval[0]+1;
            v.push_back({sum,interval[0]});
        }
        vector<int> ans;
        for(int &query:queries){
            int idx=upper_bound(v.begin(),v.end(),make_pair(query-1,0))-v.begin();
            if(idx==v.size()){
                ans.push_back(-1);
            }
            else{
                int preval=idx-1<0?0:v[idx-1].first;
                int steps=query-preval;
                ans.push_back(v[idx].second+steps-1);
            }
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<vector<int>>range(n, vector<int>(2, 0));
	    for(int i = 0 ; i < n; i++){
	        cin >> range[i][0] >> range[i][1];
	    }
	    int q;
	    cin >> q;
	    vector<int>queries;
	    for(int i = 0 ; i < q; i++){
	        int x;
            cin >> x;
	        queries.push_back(x);
	    }
	    Solution ob;
	    vector<int>ans = ob.kthSmallestNum(n, range, q, queries);
	    for(auto it : ans){
	        cout << it << " ";
	    }
	    cout << endl;
	}
	return 0;
}

// } Driver Code Ends