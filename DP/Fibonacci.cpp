#include<bits/stdc++.h>
using namespace std;
vector<int> arr(101,-1);
int fibo(int n) {
    if(n == 1 || n == 2) {
        return 1;
    }
    if(arr[n] == -1) {                                 // Recursive
        arr[n] = fibo(n-1) + fibo(n-2);
        return arr[n];
    }
    return arr[n];
}
// int main() {
//     int n;                                   
//     cin >> n;
//     cout << fibo(n);
// }
int main() {
    int n;
    cin >> n;
    vector<int> arr2(n+1, 0);
    arr2[1] = 1;
    for(int i = 2; i < n+1; i++) {
        arr2[i] = arr2[i - 1] + arr2[i - 2];
    }
    cout << arr2[n];
}
