#include<bits/stdc++.h>
using namespace std;

int findrotate(vector<int> arr) {
    int low = 0;
    int high = arr.size() - 1;
    
    while(low <= high) {
        int mid = low + (high-low)/2;
        int next  = (mid+1)%arr.size();
        int prev = (mid+arr.size()-1)%arr.size();
        if(arr[low] <= arr[high]) {
            return low;
        }
        if(arr[mid] < arr[next] && arr[mid] < arr[prev]) {
            return mid;
        }
        if(arr[mid] >= arr[low]) {
            low = mid + 1;
        }
        else if(arr[mid] <= arr[high]) {
            high = mid - 1;
        }
    }
}

int main() {
    vector<int> arr = {4,7,8,2};
    cout << findrotate(arr);
}