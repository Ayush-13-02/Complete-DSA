#include <bits/stdc++.h>
using namespace std;

int LIS(int prev,int curr,vector<int>& num,vector<vector<int>>& dp){
    if(curr>=num.size()) return 0;
    if(dp[prev+1][curr]!=-1) return dp[prev+1][curr];
    int take=0,notake=0;
    if(prev<0){
        take = 1+LIS(curr,curr+1,num,dp);
        notake = LIS(prev,curr+1,num,dp);
    }
    else{
        if(num[curr]>num[prev])
            take = 1+LIS(curr,curr+1,num,dp);
        notake = LIS(prev,curr+1,num,dp);
    }
    return dp[prev+1][curr]=max(take,notake);
}
int main()
{
    //taking total testcases
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<vector<int>> dp(n+1,vector<int>(n+1,-1));
        cout << LIS(-1,0,a,dp) << endl;
    }
}