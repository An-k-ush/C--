#include<bits/stdc++.h>
using namespace std;
vector<int> arr(100000007, 1);
int solve(int n) {
    if(n == 1) {
        return arr[n];
    }
    if(arr[n] != 1) {
        return arr[n];
    }
    for(int i = 1; i <= 5; i++) {
        if(n-i == 0) {
            break;
        }
        arr[n] = (arr[n] + solve(n-i)) % (1000000007);
    }
    return arr[n];
}
int main() {
    int n;
    cin >> n;
    cout << solve(n);
}