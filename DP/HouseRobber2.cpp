#include<bits/stdc++.h>
using namespace std;

int sol_ve(vector<int>arr,vector<int>&dp,int i,int j) {
    if(i < 0) return 0;
    if(i==0&&j==0) return arr[0];               59, 53, 41, 26, 17, 13, 11;
    if(i==0&&j==1) return 0;
    if(dp[i]!= -1) return dp[i];

    if(i==arr.size()-1){
        int pick = arr[i] + sol_ve(arr,dp,i-2,1);
        int notpick = 0 + sol_ve(arr,dp,i-1,0);
        return max(pick,notpick);
    }
    int pick = arr[i] + sol_ve(arr,dp,i-2,j);
    int notpick = 0 + sol_ve(arr,dp,i-1,j);
    return max(pick,notpick);
}

int solve(vector<int> arr) {
    vector<int> dp(arr.size(),-1);
    return sol_ve(arr,dp,arr.size()-1,0);
}

int sol_ve2(vector<int>arr,vector<int>&dp,vector<int>&dp2,int i,int j) {
    if(i < 0) return 0;
    if(i==0&&j==0) return arr[0];
    if(i==0&&j==1) return 0;
    if(dp[i]!= -1&&j==1) return dp[i];
    if(dp2[i]!=-1&&j==0) return dp2[i];

    if(i==arr.size()-1){
        int pick = arr[i] + sol_ve2(arr,dp,dp2,i-2,1);
        int notpick = 0 + sol_ve2(arr,dp,dp2,i-1,0);
        dp[i] = max(pick,notpick);
        return dp[i];
    }
    int pick = arr[i] + sol_ve2(arr,dp,dp2,i-2,j);
    int notpick = 0 + sol_ve2(arr,dp,dp2,i-1,j);
    if(j==1) {
        dp[i] = max(pick,notpick);
        return dp[i];
    }
    dp2[i]=max(pick,notpick);
    return dp2[i];
}

int solve2(vector<int> arr) {
    vector<int> dp(arr.size(),-1);
    vector<int> dp2(arr.size(),-1);
    return sol_ve2(arr,dp,dp2,arr.size()-1,0);
}

int main() {
    vector<int>arr = {59, 26, 17, 13, 11,11,11,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,21,3,124,3,52,542,6,34,634,5,4,634,634,5,45,43,52,52,5,25,2,523,52,52,35,325,23,523,52,52,35,325};
    // cout<< solve(arr)<<endl;
    cout<<solve2(arr);
}