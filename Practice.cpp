#include<bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int x;
    cout << "How many multiple : ";
    cin >> x;
    for(int i = n; i <= x*n; i = i + n) {
        cout << i<<endl;
    }
}
