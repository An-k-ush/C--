#include<bits/stdc++.h>
using namespace std;

void addNode(vector<int>adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}
void dfs(vector<int>adj[], bool visarr[], int node) {
    visarr[node] = 1;
    for(auto i : adj[node]) {
        if(!visarr[i]) {
            dfs(adj,visarr,i);
        }
    }
    
}

int main() {
    int n,e;cin>>n>>e;
    vector<int>adj[n+1];
    for(int i = 0; i < e; i++) {
        int p,q;cin>>p>>q;
        addNode(adj,p,q);
    }
    int noOfProvince = 0;
    bool visarr[n+1] = {0};
    for(int i = 1; i <= n; i++) {
        if(!visarr[i]) {
            noOfProvince++;
            dfs(adj,visarr,i);
        }
    }
    cout<<noOfProvince;
}