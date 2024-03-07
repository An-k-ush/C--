#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>>v;
    int x;
    cin>>x;
    int y;
    cin>>y;
    v.resize(x);
    for(int i = 0; i < x; i++) {
        v[i].resize(y);
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cin >> v[i][j];
        }
    }
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cout << v[i][j]<<" ";
        }
    }
}