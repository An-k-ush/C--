#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a number : ";
    cin >> n;
    for(int i = 0; n > 0; n /= 10) {
        i = n % 10;
        sum += i;
    }
    cout << "The sum is : "<< sum;
}