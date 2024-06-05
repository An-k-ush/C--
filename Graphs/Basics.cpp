#include<bits/stdc++.h>
using namespace std;

void addnode(vector<int>adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

void dfs(vector<int>adj[],vector<bool>&visarr, int root) {
    visarr[root] =1;
    cout<<root<<" ";
    for(auto i : adj[root]) {
        if(visarr[i]) continue;
        dfs(adj,visarr,i);
    }
}


int main() {
    int n;
    cin>>n;
    vector<int>adj[n+1];
    int e;
    cin>>e;
    for(int i = 1; i <= e; i++) {
        int p,q;
        cin>>p>>q;
        addnode(adj,p,q);
    }
    vector<bool>visarr(n+1,0);
    dfs(adj,visarr,1);
    
}