#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to count the number of ways in which frog can reach the top.
    int MOD= 1e9+7;
    long long countWays(int n)
    {
        if(n==0) return 1;
        if(n<0) return 0;
        
        return (countWays(n-1)+countWays(n-2)+countWays(n-3))%MOD;
    }
};

int main()
{
    //taking testcases
	int t;
	cin >> t;
	
	while(t--)
	{
	    //taking number of steps in stair
		int n;
		cin>>n;
		Solution ob;
		//calling function countWays()
		cout << ob.countWays(n) << endl;
	}
    
    return 0;
    
}