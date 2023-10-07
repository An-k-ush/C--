#include<bits/stdc++.h>
using namespace std;

void rev(int arr[], int start, int end) {
    if(start >= end) {
        return;
    }
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
    return rev(arr, start, end);
}
int main() {
    int arr[] = {1,5,2,6,33,4,3};
    rev(arr,0,6);
    for(int i : arr) {
        cout <<i <<" ";
    }
}