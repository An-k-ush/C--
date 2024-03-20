#include<bits/stdc++.h>
using namespace std;

int sol_ve(int m, int n, vector<vector<int>>mat, vector<vector<int>>&dp, int i, int j) {
    if(mat[i][j]==1) {
        dp[i][j] = 0;
        return 0;
    }
    if(i==m-1 && j == n-1) return 1;
    if(dp[i][j] != -1) return dp[i][j];
    
    dp[i][j] = 0;
    dp[i][j] += i<m-1 ? sol_ve(m,n,mat,dp,i+1,j) : 0;
    dp[i][j] += j<n-1 ? sol_ve(m,n,mat,dp,i,j+1) : 0;
    return dp[i][j];
}

int solve(int m, int n, vector<vector<int>>mat) {
    vector<vector<int>> dp(m,vector<int>(n,-1));
    return sol_ve(m,n,mat,dp,0,0);
}

int main() {
    int m,n;
    cin>>m>>n;
    vector<vector<int>>mat(m,vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>mat[i][j];
        }
    }
    cout<<solve(m,n,mat)<<endl;
    vector<vector<int>>dp(m,vector<int>(n,-1));
    bool flag = false;
    for(int j = n-1; j >= 0; j--) {
        if(flag || mat[m-1][j]==1) {
            flag = true;
            dp[m-1][j] = 0;
            continue;
        }
        dp[m-1][j] = 1;
    }
    flag = false;
    for(int i = m-1; i >= 0; i--) {
        if(flag || mat[i][n-1]==1) {
            flag = true;
            dp[i][n-1] = 0;
            continue;
        }
        dp[i][n-1] = 1;
    }
    for(int i = m-2; i>=0; i--) {
        for(int j = n-2; j>=0; j--) {
            if(mat[i][j]) dp[i][j] = 0;
            else dp[i][j] = dp[i+1][j] + dp[i][j+1];
        }
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<dp[0][0];
}