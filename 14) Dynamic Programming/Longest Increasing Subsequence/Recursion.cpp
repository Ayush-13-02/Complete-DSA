#include <bits/stdc++.h>
using namespace std;

int LIS(int prev,int curr,vector<int>& num){
    if(curr>=num.size()) return 0;
    int take=0,notake=0;
    if(prev<0){
        take = 1+LIS(curr,curr+1,num);
        notake = LIS(prev,curr+1,num);
    }
    else{
        if(num[curr]>num[prev])
            take = 1+LIS(curr,curr+1,num);
        notake = LIS(prev,curr+1,num);
    }
    return max(take,notake);
}