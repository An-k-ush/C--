#include<bits/stdc++.h>
using namespace std;

const int mx = 1e5+5;
int dp[101][mx];

bool solve(vector<int>& arr, int t, int level) {
    if(t==0) {
        return 1;
    }
    if(level==arr.size()) return 0;
    if(dp[level][t]!=-1) {
        return dp[level][t];
    }

    bool not_take = solve(arr,t,level+1);
    if(not_take) {
        return dp[level][t] = 1;
    }
    if(t>=arr[level]) {
        bool take = solve(arr,t-arr[level],level+1);
        if(take) {
            return dp[level][t] = 1;
        }
    }
    return dp[level][t]= 0;
}
void printset(vector<int>&arr, int t, int level) {
    if(level == arr.size()) return;
    if(t==0) return;
    if(solve(arr,t,level+1)) {
        printset(arr,t,level+1);
    }
    else if(solve(arr,t-arr[level],level+1)) {
        cout<<arr[level]<<" ";
        printset(arr,t-arr[level],level+1);
    }
    else {
        cout<<-1;
    }
}

int main() {
    memset(dp,-1,sizeof(dp));
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    while(q--) {
        int t;
        cin>>t;
        if(solve(arr,t,0)) {
            printset(arr,t,0);
        }
    }
}