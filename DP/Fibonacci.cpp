#include<bits/stdc++.h>
using namespace std;
vector<int> arr(101,-1);
int fibo(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    if(arr[n] == -1) {
        arr[n] = fibo(n-1) + fibo(n-2);
        return arr[n];
    }
    return arr[n];
}
int main() {
    int n;
    cin >> n;
    cout << fibo(n);
}