#include<bits/stdc++.h>
using namespace std;


int main() {
    vector<vector<int>> v;
    v.push_back({1,2,3});
    v[0].push_back(4);
    v.resize(2);
    v[1].push_back(1);
    cout << v[1][0]<<endl;
    cout << v.size();
    cout <<endl<<v[0].size();
}