#include<bits/stdc++.h>
using namespace std;

void addnode(vector<int>adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

int dfs_countsub(vector<int>adj[], int root, int parent,vector<int>&arr) {
    int ans = 0;
    for(auto i : adj[root]) {
        if(i==parent) continue;
        ans+=dfs_countsub(adj,i,root,arr);
    }
    arr[root]= ans;
    return ans+1;
}

int main() {
    int n;
    cin>>n;
    vector<int>adj[n+1];
    for(int i = 2; i <= n; i++) {
        int q;
        cin>>q;
        addnode(adj,i,q);
    }
    vector<int>arr(n+1,0);
    dfs_countsub(adj,1,0,arr);
    for(int i = 1; i<n+1; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}