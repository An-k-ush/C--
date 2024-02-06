#include<bits/stdc++.h>
using namespace std;

int findrotate(vector<int> arr) {
    int low = 0;
    int high = arr.size() - 1;
    
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(low == mid) {
            if(arr[mid] < arr[high]) return mid;
            else    return high;
        }
        if(arr[mid] > arr[low] && arr[high] > arr[mid]) return 0;
        if(arr[mid] > arr[low]) low = mid;
        else if(arr[mid] < arr[high]) high = mid;
    }
}

int main() {
    vector<int> arr = {4,7,8,2};
    cout << findrotate(arr);
}