#include<bits/stdc++.h>
using namespace std;

void undirnode(vector<int>adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

void bfs(vector<int>adj[], int node, vector<bool>&visarr, bool& ans) {
    visarr[node] = true;
    queue<int>q;
    q.push(node);
    while(!q.empty()) {
        int s = q.size();
        for(int i = 0; i < s; i++) {
            int temp = q.front();
            int f = 0;
            for(auto j : adj[temp]) {
                if(visarr[j]) {
                    f++;
                }
                else {
                    q.push(j);
                    visarr[j] = 1;
                }
                if(f==2) {ans = 1; return;}
            }
            q.pop();
        }
    }
    
}

int main() {
    int v,e; cin>>v>>e;
    vector<int>adj[v+1];
    for(int i = 0; i < e; i++) {
        int p,q; cin>>p>>q;
        undirnode(adj,p,q);
    }
    bool ans = 0;
    vector<bool>visarr(v+1,0);
    for(int i = 1; i <= v; i++) {
        if(!visarr[i]) bfs(adj,i,visarr,ans);
        if(ans) break;
    }
    if(ans) cout<<"LOOP FOUND"<<endl;
    else cout<<"NO LOOP FOUND"<<endl;
}