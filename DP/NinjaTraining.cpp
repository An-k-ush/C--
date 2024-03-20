#include<bits/stdc++.h>
using namespace std;

int sol_ve(vector<vector<int>>arr,vector<vector<int>>&dp,int n,int i,int j) {
    if(i==0) {
        dp[i][0] = arr[i][0] + sol_ve(arr,dp,n,i+1,0);
        dp[i][1] = arr[i][1] + sol_ve(arr,dp,n,i+1,1);
        dp[i][2] = arr[i][2] + sol_ve(arr,dp,n,i+1,2);
        int x = max(dp[i][0],dp[i][1]);
        return max(x,dp[i][2]);
    }
    if(i>n) return 0;
    if(dp[i][0]!=-1&&dp[i][2]!=-1 && j==1) return  max(dp[i][0],dp[i][2]);
    if(dp[i][1]!=-1&&dp[i][0]!=-1 && j==2) return  max(dp[i][0],dp[i][1]);
    if(dp[i][2]!=-1&&dp[i][1]!=-1 && j==0) return  max(dp[i][1],dp[i][2]);
    
    if(j==0) {
        dp[i][1] = arr[i][1] + sol_ve(arr,dp,n,i+1,1);
        dp[i][2] = arr[i][2] + sol_ve(arr,dp,n,i+1,2);
        return max(dp[i][1],dp[i][2]);
    }
    if(j==1) {
        dp[i][0] = arr[i][0] + sol_ve(arr,dp,n,i+1,0);
        dp[i][2] = arr[i][2] + sol_ve(arr,dp,n,i+1,2);
        return max(dp[i][0],dp[i][2]);
    }
    if(j==2) {
        dp[i][0] = arr[i][0] + sol_ve(arr,dp,n,i+1,0);
        dp[i][1] = arr[i][1] + sol_ve(arr,dp,n,i+1,1);
        return max(dp[i][0],dp[i][1]);
    }
}

int solve(vector<vector<int>>arr) {
    vector<vector<int>>dp(arr.size(), vector<int>(3,-1));
    return sol_ve(arr,dp,arr.size()-1,0,0);
}

int main() {
    vector<vector<int>>arr = {{73, 57, 31},
{61, 30, 34},
{87, 64, 41},
{9, 69, 12},
{33, 22, 62},
{8, 15, 59},
{74, 74, 51},
{72, 5, 62},
{23, 72, 93}};
    cout<<solve(arr)<<endl;
    vector<vector<int>>dp(arr.size(), vector<int>(3,-1));
    int n = arr.size();
    dp[0][0] = arr[0][0];
    dp[0][1] = arr[0][1];
    dp[0][2] = arr[0][2];
    for(int i = 1; i < arr.size(); i++) {
        dp[i][0] = arr[i][0] + max(dp[i-1][1],dp[i-1][2]);
        dp[i][1] = arr[i][1] + max(dp[i-1][0],dp[i-1][2]);
        dp[i][2] = arr[i][2] + max(dp[i-1][1],dp[i-1][0]);
    }
    int x = max(dp[n-1][0],dp[n-1][1]);
    cout<< max(dp[n-1][2],x)<<endl;
    int a  = arr[0][0];
    int b = arr[0][1];
    int c = arr[0][2];
    for(int i = 1; i < arr.size(); i++) {

        int temp = arr[i][0] + max(b,c);
        int temp_2 = arr[i][1] + max(a,c);
        c = arr[i][2] + max(a,b);
        a= temp;
        b= temp_2;
    }
    int y = max(a,b);
    cout<<max(y,c);
}




// {{73, 57, 31},
// {61, 30, 34},
// {87, 64, 41},
// {9, 69, 12},
// {33, 22, 62},
// {8, 15, 59},
// {74, 74, 51},
// {72, 5, 62},
// {23, 72, 93}}