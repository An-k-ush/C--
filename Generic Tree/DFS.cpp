#include<bits/stdc++.h>
using namespace std;

map<int,pair<int,int>>ti_me;
int t = 0;

void addnode(vector<int> adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

void dfs(int node, vector<int> adj[],int parent) {
    ti_me[node].first = t;
    t++;
    // in-time. We are entering a node
    // before the loop starts we can do anything we want to the node here
    // here we are only printing it but we can even modify it,store it somewhere etc.
    cout<<node<<" ";
    for(int i = 0; i < adj[node].size(); i++) {
        if(adj[node][i]== parent) {
            continue;
        }
        dfs(adj[node][i],adj,node);
    }
    ti_me[node].second = t;
    t++;
    // out-time we are leaving the node here after all its children is visited
    // you can do things that you need to do after all children are visited
    return;
}

int main() {
    int n;
    cin>>n;
    vector<int> adj[n+1];
    for(int i = 1; i < n; i++) {
        int p,q;
        cin>>p>>q;
        addnode(adj,p,q);
    }
    dfs(1,adj,0);
}