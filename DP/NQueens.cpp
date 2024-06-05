#include<bits/stdc++.h>
using namespace std;

bool check(int rowQ, int colQ, vector<int>&queens) {
    for(int i = 0; i < rowQ; i++) {
        if(queens[i]==colQ || abs(queens[i]-colQ)==abs(i-rowQ)) {
            return false;
        }
    }
    return true;
}

int sol_ve(int level, int n,vector<int>&queens) {
    if(level==n) return 1;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(check(level,i,queens)) {
            queens[level] = i;
            ans += sol_ve(level+1,n,queens);
            queens[level] = -1;
        }
    }
    return ans;
}

int solve(int n) {
    vector<int>queens(n,-1);
    return sol_ve(0,n,queens);
}

int main() {
    int n;
    cin>>n;
    cout<<solve(n);
}