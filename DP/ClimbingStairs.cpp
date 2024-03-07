#include<bits/stdc++.h>
using namespace std;

vector<int>dp(51,-1);

int climb(int n) {
    if(n==1) return 1;
    if(n==2) return 2;
    if(dp[n]==-1) {
        dp[n]= climb(n-1)+climb(n-2);
        return dp[n];
    }
    return dp[n];
}

int main() {
    int n;
    cin>>n;
    cout<<climb(n);
}