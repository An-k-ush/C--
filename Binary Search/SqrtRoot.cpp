#include<bits/stdc++.h>
using namespace std;

int squareroot(int x) {
    if(x==1) {
        return 1;
    }
    int low = 1;
    int high = x;
    while(low <= high) {
        int mid  = low + (high - low)/2;
        if(mid*mid == x) {
            return mid;
        }
        else if(mid*mid < x) {
            low = mid + 1;
        }
        else if(mid*mid > x) {
            high = mid - 1;
        }
        if(low == mid) {
            if((mid+1)*(mid+1)<=x) return mid+1;
            else return mid;
        }
    }
}

int main() {
    int x;
    cin >> x;
    cout << squareroot(x);
}