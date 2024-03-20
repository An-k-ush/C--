#include<bits/stdc++.h>
using namespace std;

int min_energy(int n, vector<int> height) {
    // vector<int> energy(n,0);
    // energy[n-2] = abs(height[n-1]-height[n-2]);
    // for(int i = 0; i <= n-3; i++) {
    //     energy[n-3-i] = min(abs(height[n-2-i]-height[n-3-i])+energy[n-2-i], abs(height[n-1-i]-height[n-3-i])+energy[n-1-i]);
    // }
    // return energy[0];
    // int prev = abs(height[n-1]-height[n-2]);
    // int prev2 = 0;
    // for(int i = 0; i <= n-3; i++) {
    //     int curr = min(abs(height[n-2-i]-height[n-3-i])+prev, abs(height[n-1-i]-height[n-3-i])+prev2);
    //     prev2 = prev;
    //     prev = curr;
    // }
    // return prev;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> height(n);
        for(int i = 0; i < n; i++) {
            cin >> height[i];
        }
        cout<<min_energy(n,height)<<endl;
    }
    
}
