#include <bits/stdc++.h>
using namespace std;

int LCS(int i,int j,string& s1,string& s2){
    if(i>=s1.size()||j>=s2.size()) return 0;

    if(s1[i]==s2[j]){
        return 1+LCS(i+1,j+1,s1,s2);
    }
    else{
        return max(LCS(i+1,j,s1,s2),LCS(i,j+1,s1,s2));
    }
}
int main(){
    string s1="AXYT",s2="AYZX";
    int n=s1.size(),m=s2.size();
    return LCS(0,0,s1,s2);
}