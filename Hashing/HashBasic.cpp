#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int t;
    cin >> t;
    int hash[50] = {0};
    // Precomputing and Hashing
    for(int i = 0; i < n; i++) {
        hash[arr[i]] += 1;
    }
    while(t--) {
        int q;
        cin >> q;
        // Fetching the values
        cout << hash[q] << endl;
    }
}