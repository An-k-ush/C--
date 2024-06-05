#include<bits/stdc++.h>
using namespace std;

bool sol_ve(int i, int n, vector<int>&arr, int target, int curr) {
    if(target==curr) return true;
    if(i==n) {
        return false;
    }

    bool not_pick = sol_ve(i+1,n,arr,target,curr);
    if(not_pick) return true;
    bool pick = sol_ve(i+1,n,arr,target,arr[i]+curr);
    if(pick) return true;
    return false;

}

bool solve(vector<int> &arr, int k) {
    return sol_ve(0 ,arr.size(),arr, k, 0);
}

bool sol_ve2(int i, vector<int>&arr, int target,vector<vector<int>>&dp) {
    if(target == 0) return true;
    if(i==arr.size()-1) {
        if(arr[i]==target) return true;
        else return false;
    }
    if(dp[i][target]!=-1) {
        return dp[i][target];
    }
    if(target>=arr[i]) {
        dp[i][target] = sol_ve2(i+1,arr,target-arr[i],dp);
        if(dp[i][target]) return dp[i][target];
    }
    dp[i][target] = sol_ve2(i+1,arr,target,dp);
    return dp[i][target];


}

bool solve2(vector<int>&arr, int k) {
    vector<vector<int>>dp(arr.size(),vector<int>(k+1,-1));
    return sol_ve2(0,arr,k,dp);
}

int main() {
    vector<int> arr = {2,3,2,1,2,10};
    if(solve(arr, 6)) {
        cout<<"Sum Found"<<endl;
    }
    else cout<<"404 Not Found"<<endl;
    if(solve2(arr, 20)) {
        cout<<"Sum Found";
    }
    else cout<<"404 Not Found";
}