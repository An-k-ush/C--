#include<bits/stdc++.h>
using namespace std;


int fibonacci(int n,vector<int>&dp) {
    if(n==1) return 0;
    if(n==2) return 1;
    if(dp[n]==-1) {
        dp[n] = fibonacci(n-1,dp)+fibonacci(n-2,dp);
        return dp[n];
    }
    return dp[n];
}

int main() {
    int n;
    cin>>n;
    vector<int> dp(n+1,-1);
    cout<<fibonacci(n,dp);
    cout<<endl<<dp[9];
}
