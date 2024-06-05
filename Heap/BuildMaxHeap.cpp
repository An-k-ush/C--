#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[], int i, int n) {
    int left = 2*i;
    int right = 2*i+1;
    int largest = i;
    if(left<= n) {
        if(arr[left-1]> arr[largest-1]) largest = left;
    }
    if(right<=n) {
        if(arr[right-1]>arr[largest-1]) largest = right;
    }
    if(largest == i) return;
    swap(arr[largest-1],arr[i-1]);
    return maxheapify(arr,largest,n);
}

void buildmaxheap(int arr[], int n) {
    for(int i = n/2; i >=1; i--) {                     // This looks like     O(N lg N)          but in fact it is O(N)!!! Yes a linear time
        maxheapify(arr,i,n);
    }
    return;
}

int main() {
    int arr[] = {4,1,3,2,16,9,10,14,8,7};                           
    buildmaxheap(arr,10);                              
    for(auto i: arr) {
        cout<<i<<" ";
    }
}