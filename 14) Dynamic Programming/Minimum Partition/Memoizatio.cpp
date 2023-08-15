#include <bits/stdc++.h>
using namespace std;

class Solution{
  private:
  int N,sum;
  public:
    
    int solve(int idx,int sum1,int arr[],vector<vector<int>>& dp){
        if(idx>=N) return abs(2*sum1-sum);
        if(dp[idx][sum1]!=-1) return dp[idx][sum1];
        int s1 = solve(idx+1,sum1+arr[idx],arr,dp);
        int s2 = solve(idx+1,sum1,arr,dp);
        return dp[idx][sum1]=min(s1,s2);
    }
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    N=n,sum=0;
	    for(int i=0;i<n;i++) sum += arr[i];
	    vector<vector<int>> dp(n,vector<int>(sum,-1));
	    return solve(0,0,arr,dp);
	} 
};


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}