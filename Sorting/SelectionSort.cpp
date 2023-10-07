#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {13,46,24,52,20,9};
    for(int i = 0; i < 5; i++) {
        for(int j = i+1; j < 6; j++) {
            int num = arr[i];
            if(arr[j] < arr[i]) {
                arr[i] = arr[j];
                arr[j] = num;
            }
        }

    }
    for(int i = 0; i < 6; i++) {
        cout << arr[i]<<" ";
    }
}