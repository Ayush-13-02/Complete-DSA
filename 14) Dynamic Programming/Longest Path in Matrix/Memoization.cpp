//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    
    int solve(int i,int j,vector<vector<int>>& M,vector<vector<int>>& dp){
        int n=M.size(),m=M[0].size();
        if(i>=n||i<0||j>=m||j<0) return 0;
        if(dp[i][j]>=0) return dp[i][j];
        int r[4]={1,-1,0,0};
        int c[4]={0,0,1,-1};
        int take=0;
        for(int k=0;k<4;k++){
            int x = i+r[k],y=j+c[k];
            if((x<n && x>=0 && y<m && y>=0)  && M[x][y]>M[i][j]){
                take = max(take,1+solve(x,y,M,dp));
            }
        }
        // cout<<i<<" "<<j<<")(";
        return dp[i][j]=take;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        // Code here
        int n = matrix.size(),m=matrix[0].size(),ans=0;
        vector<vector<int>> dp(n,vector<int>(m,-1));
        // ans = max(ans,solve(0,0,matrix,dp));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans = max(ans,solve(i,j,matrix,dp));
            }
        }
        return ans+1;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>matrix(n, vector<int>(m, 0));
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)cin >> matrix[i][j];
		Solution obj;
		int ans = obj.longestIncreasingPath(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends