#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&image, int sr, int sc, int color, vector<vector<bool>>&visarr) {
    visarr[sr][sc] = 1;
    int m = image.size();
    int n = image[0].size();
    int o = image[sr][sc];
    queue<pair<int,int>>q;
    q.push({sr,sc});
    while(!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        for(int i = -1; i<=1; i++) {
            for(int j = -1; j <= 1; j++) {
                if(abs(i)==abs(j)) continue;
                if(r+i>=0 && c+j >= 0 && r+i < m && c+j < n && o == image[r+i][j+c] && visarr[r+i][c+j]==0) {
                    q.push({r+i,c+j});
                    visarr[r+i][c+j] = 1;
                }

            }
        }
        image[r][c] = color;
        q.pop();
    }
}

vector<vector<int>> floodFill(vector<vector<int>>&image, int sr, int sc, int color) {
    int m = image.size();
    int n = image[0].size();
    vector<vector<bool>>visarr(m,vector<bool>(n,0));
    // bfs(image,sr,sc,color, visarr);
    visarr[sr][sc] = 1;

    int o = image[sr][sc];
    queue<pair<int,int>>q;
    q.push({sr,sc});
    while(!q.empty()) {
        int r = q.front().first;
        int c = q.front().second;
        for(int i = -1; i<=1; i++) {
            for(int j = -1; j <= 1; j++) {
                if(abs(i)==abs(j)) continue;
                if(r+i>=0 && c+j >= 0 && r+i < m && c+j < n && o == image[r+i][j+c] && visarr[r+i][c+j]==0) {
                    q.push({r+i,c+j});
                    visarr[r+i][c+j] = 1;
                }

            }
        }
        image[r][c] = color;
        q.pop();
    }




    
    return image;
}

int main() {
    int m = 3, n =3;
    vector<vector<int>>image(m,vector<int>(n));
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin>>image[i][j];
        }
    }
    
    vector<vector<int>>ans = floodFill(image,1,1,2);
    for(int i = 0; i < ans.size(); i++) {
        for(int j = 0; j < ans[0].size(); j++) {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}