#include<bits/stdc++.h>
using namespace std;

void rotate(int arr[], int x,int size) {
    x %= size;
    while(x--) {
        
        for(int i = 0; i < size-1; i++) {
            swap(arr[i],arr[size-1]);
        }
    }
}
void rotate2(int arr[], int x, int size) {
    x%=size;
    int y = size;
    int temp = x-1;
    while(y--) {
        swap(arr[temp],arr[size-1]);
        temp += x;
        temp %= size;
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(auto& i : arr) {
        cin >> i;
    }
    int x;
    cin >> x;
    rotate2(arr,x,n);
    for(auto& i : arr) {
        cout << i<<" ";
    }
}