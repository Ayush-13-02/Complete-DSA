//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int MOD= 1e9+7;
    long long countWays(int n)
    {
        if(n<3) return n;
        int n_1=2,n_2=1,n_3=1;
        for(int i=3;i<=n;i++){
            int n_ = (1LL*n_1+n_2+n_3)%MOD;
            n_3=n_2,n_2=n_1,n_1=n_;
        }
        return n_1;
    }
};

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		cout << ob.countWays(n) << endl;
	}
    return 0;
}