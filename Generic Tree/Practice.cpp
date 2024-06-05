#include<bits/stdc++.h>
using namespace std;

void addnode(vector<int>adj[], int a, int b) {
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void dfs(vector<int>adj[], int node, int parent) {
    cout<<node<<" ";
    int s = adj[node].size();
    for(auto i : adj[node]) {
        if(i==parent) continue;
        dfs(adj,i,node);
    }
    return;
}

void bfs(vector<int>adj[], int node) {
    queue<pair<int,int>>q;
    q.push({node,0});
    while(!q.empty()) {
        int s = q.size();
        for(int i = 0; i < s;i++) {
            int temp = q.front().first;
            for(auto j:adj[temp]) {
                if(j==q.front().second) continue;
                q.push({j,temp});
            }
            cout<<temp<<" ";
            q.pop();
        }
        cout<<endl;
    }

}

int main() {
    vector<int>adj[8];
    for(int i = 1; i < 7; i++) {
        int p,q;
        cin>>p>>q;
        addnode(adj,p,q);
    }
    dfs(adj,1,0);
    cout<<endl;
    bfs(adj,1);
}