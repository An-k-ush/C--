#include<bits/stdc++.h>
using namespace std;

void maxheapify(int arr[], int i, int size) {             // This will check if the current node is satifying the property of Max-Heap or not
    int left = 2*i;                                       // If not then it will correct it, given if its left and right subtree are also maxheap
    int right = 2*i+1;
    int largest= arr[i-1];
    if(left <= size) largest = max(largest,arr[left-1]);
    if(right <= size) largest = max(largest,arr[right-1]);
    if(largest == arr[i-1]) {
        return;
    }
    else if(largest == arr[left-1]) {
        swap(arr[i-1],arr[left-1]);
        return maxheapify(arr,left,size);
    }
    else  {
        swap(arr[i-1],arr[right-1]);
        return maxheapify(arr,right,size);
    }
}

int main() {
    int arr[] = {16,4,10,14,7,9,3,2,8,1};                           //             O(lg n)                  
    maxheapify(arr,2,10);
    for(auto i : arr) {
        cout<<i<<" ";
    }
}