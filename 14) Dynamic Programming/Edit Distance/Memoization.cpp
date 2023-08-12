//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int solve(int i,int j,string& s1,string& s2,vector<vector<int>>& dp){
        if(i>=s1.size()||j>=s2.size()) return abs(s1.size()+s2.size()-i-j);
        if(dp[i][j]!=-1) return dp[i][j];
        int ins=200,del=200,rep=200;
        if(s1[i]!=s2[j]){
            ins = 1+solve(i,j+1,s1,s2,dp);
            del = 1+solve(i+1,j,s1,s2,dp);
            rep = 1+solve(i+1,j+1,s1,s2,dp);
        }
        else{
            rep = solve(i+1,j+1,s1,s2,dp);
        }
        
        return dp[i][j]=min(ins,min(del,rep));
    }
    int editDistance(string s1, string s2) {
        // Code here
        int n=s1.size(),m=s2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return solve(0,0,s1,s2,dp);
    }
};

//{ Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends