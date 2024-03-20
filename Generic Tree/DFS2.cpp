#include<bits/stdc++.h>
using namespace std;

void createtree(vector<int>adj[],int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

void dfs(vector<int> adj[], int root, int parent) {
    cout<<root<<" ";
    for(auto i : adj[root]) {
        if(i==parent) continue;
        dfs(adj,i,root);
    }
}
int print_path(vector<int> adj[], int root, int target, int parent) {
    if(root==target) {
        cout<<target<<"->";
        return 1;
    }
    for(auto i : adj[root]) {
        if(i== parent) continue;
        int flag = print_path(adj,i,target,root);
        if(flag) {
            cout<<root<<"->";
            return 1;
        }
    }
    return 0;
}
int main() {
    int n;
    cin >> n;
    vector<int> adj[n+1];
    for(int i = 1; i < n; i++) {
        int p,q;
        cin>> p >> q;
        createtree(adj,p,q);
    }
    if(print_path(adj,1,6,0)) {
    }
    else cout<<"No path found";
}