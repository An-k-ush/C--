#include<bits/stdc++.h>
using namespace std;


int solve(int n, vector<int>height,int k,vector<int>&energy){
    if(n==0) return 0;
    if(energy[n]!= INT32_MAX) {
        return energy[n];
    }
    for(int i = 1; i <= k; i++) {
        if(n-i<0) break;
        int temp = abs(height[n]-height[n-i])+solve(n-i,height,k,energy);
        energy[n] = min(temp,energy[n]);
    }
    return energy[n];

}

int main() {
    int n;
    cin>> n;
    int k;
    cin>> k;
    vector<int>height(n);
    for(int i = 0; i < n; i++) {
        cin>> height[i];
    }
    vector<int> energy(n,INT32_MAX);
    energy[0] = 0;
    cout<<solve(n-1,height,k,energy);
}