#include<bits/stdc++.h>
using namespace std;

int sol_ve(int m, int n, vector<vector<int>>&dp, int x, int y) {
    if(x==m-1 || y==n-1) return 1;                                     // Memoization
    if(dp[x][y]!=-1) return dp[x][y];
    dp[x][y] = sol_ve(m,n,dp,x+1,y) + sol_ve(m, n, dp, x, y+1);
    return dp[x][y];
}

int solve(int m, int n) {
    vector<vector<int>>dp(m,vector<int>(n,-1));
    return sol_ve(m, n, dp, 0, 0);
}

int main() {
    int m,n;
    cin>>m>>n;
    cout << solve(m,n)<<endl;
    vector<vector<int>>dp(m,vector<int>(n,1));
    for(int i = 0; i < n-1; i++) {
        dp[m-1][i] = 1;
    }
    for(int i = 0; i < m-1; i++) {
        dp[i][n-1] = 1;
    }
    for(int i = m-2; i >= 0; i--) {
        for(int j = n-2; j>=0; j--) {                             // Tabulation
            dp[i][j] = dp[i+1][j] + dp[i][j+1];
        }
    }
    cout<<dp[0][0];
}