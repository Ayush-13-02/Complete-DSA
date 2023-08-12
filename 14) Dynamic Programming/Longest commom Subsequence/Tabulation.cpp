#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1="AXYT",s2="AYZX";
    int n=s1.size(),m=s2.size();
    vector<vector<int>> dp(n+1,vector<int>(m+1,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(s1[i]==s2[j]) dp[i+1][j+1]=1+dp[i][j];
            else dp[i+1][j+1] = max(dp[i+1][j],dp[i][j+1]);
        }
    }
    return dp[n][m];
}