#include<bits/stdc++.h>
using namespace std;


int main() {
    int m, n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>grid[i][j];
        }
    }
    vector<vector<bool>>visarr(m,vector<bool>(n,0));
    queue<pair<int,int>>q;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(grid[i][j] == 2) {
                q.push({i,j});
                visarr[i][j] = 1;
            }
        }
    }
    int time = 0;
    while(!q.empty()) {
        int s = q.size();
        for(int p = 0; p < s; p++) {
            int r = q.front().first;
            int c = q.front().second;
            for(int i = -1; i < 2; i++) {
                for(int j = -1; j < 2; j++) {
                    if(abs(i)==abs(j) || grid[i][j] == 0) continue;
                    if(r+i>=0 && r+i < m && c+j >= 0 && c+j < n && !visarr[i][j] && grid[i][j]==1) {
                        q.push({i,j});
                        visarr[i][j] = 1;
                    }
                }
            }
            grid[r][c] = 2;
            q.pop();
        }
        time++;
    }
    cout<<time;
}