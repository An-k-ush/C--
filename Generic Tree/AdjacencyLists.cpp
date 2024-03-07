#include<bits/stdc++.h>
using namespace std;

void addnode(vector<int> adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

int main() {
    int n;
    cin>>n;
    vector<int> adj[n+1];          // n+1 for 1 based index tree
    for(int i = 1; i < n; i++) {
        int p,q;
        cin>>p>>q;
        addnode(adj,p,q);
    }
}