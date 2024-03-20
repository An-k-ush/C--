#include<bits/stdc++.h>
using namespace std;


int sol_ve(vector<int> arr,vector<int>&dp, int i) {
    if(i==0) return arr[0];
    if(i<0) return 0;
    if(dp[i]!=-1) return dp[i];                                // Memoization
    int pick = arr[i] + sol_ve(arr,dp,i-2);
    int notpick = sol_ve(arr,dp,i-1);
    dp[i] = max(pick,notpick);
    return dp[i];
}

int solve(vector<int> arr) {
    vector<int>dp(arr.size()+1,-1);
    return sol_ve(arr,dp,arr.size()-1);
}

int main() { 
    vector<int> arr = {2,1};
    cout<<solve(arr)<<endl;
    vector<int>dp(arr.size(),-1);
    dp[0] = arr[0];
    dp[1] = arr[1];
    for(int i = 2; i < arr.size(); i++) {
        int pick = arr[i]+dp[i-2];
        int notpick = dp[i-1];                               // Tabulation
        dp[i]= max(pick,notpick);
    }
    cout<<dp[arr.size()-1]<<endl;
    int pre = arr[0];
    int prepre = 0;
    for(int i = 1; i < arr.size(); i++) {
        int pick = arr[i];       
        if(i>1) pick+= prepre;         // Tabulation with Space Optimisation
        prepre = pre;
        pre = max(pre,pick);
    }
    cout<<pre;
}