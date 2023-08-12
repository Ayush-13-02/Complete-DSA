#include <bits/stdc++.h>
using namespace std;

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
        vector<int> dp;
        dp.push_back(a[0]);
        for(int i=1;i<n;i++){
            if(dp.back()<a[i]) dp.push_back(a[i]);
            else{
                int idx = lower_bound(dp.begin(),dp.end(),a[i])-dp.begin();
                dp[idx]=a[i];
            }
        }
        return dp.size();
    }
}