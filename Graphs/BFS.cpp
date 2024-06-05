#include<bits/stdc++.h>
using namespace std;


void addbiedge(vector<int>adj[], int p, int q) {
    adj[p].push_back(q);
    adj[q].push_back(p);
}

void bfs(vector<int>adj[],int node, bool arr[]) {
    queue<int>q;
    q.push(node);
    arr[node]= 1;
    int i= 0;
    while(!q.empty()) {
        int s = q.size();
        cout<<"Level "<<i<<" -> [ ";
        i++;
        for(int j = 0; j < s; j++) {
            int temp = q.front();
            cout<<temp<<" ";
            q.pop();
            for(auto i : adj[temp]) {
                if(arr[i]) continue;
                arr[i] = 1;
                q.push(i);
            }
        }
        cout<<"]";
        
        cout<<endl;
    }
}

int main() {
    int n;cin>>n;
    int e;cin>>e;
    vector<int>adj[n+1];
    for(int i = 0; i < e; i++) {
        int p,q;
        cin>>p>>q;
        addbiedge(adj,p,q);
    }
    bool arr[n+1];
    memset(arr,0,sizeof(arr));
    bfs(adj,6,arr);
}