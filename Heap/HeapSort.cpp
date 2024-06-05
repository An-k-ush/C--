#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[], int i, int n) {
    int left = 2*i;
    int right = 2*i+1;
    int largest = i;
    if(left<=n) {
        if(arr[left-1]>arr[largest-1]) largest = left;
    }
    if(right <= n) {
        if(arr[right-1]>arr[largest-1]) largest = right;
    }
    if(i==largest) return;
    swap(arr[i-1],arr[largest-1]);
    return maxheapify(arr,largest,n);
}

void buildmaxheap(int arr[], int n) {
    for(int i = n/2; i >= 1; i--) {
        maxheapify(arr,i,n);
    }
    return;
}

void heapsort(int arr[], int n) {
    int size = n;
    buildmaxheap(arr,size);
    for(int i = n; i> 1; i--) {
        swap(arr[0],arr[i-1]);
        buildmaxheap(arr,size-1);
        size--;
    }
}

int main() {
    int arr[] = {9,14,10,8,7,16,1,2,3,4,11,13,12};
    int n= sizeof(arr)/sizeof(arr[0]);
    heapsort(arr,n);
    for(auto i : arr) {
        cout<<i<<" ";
    }
}