#include<bits/stdc++.h>
using namespace std;

bool inrotated(vector<int>arr, int target) {
    int low = 0;
    int high = arr.size() - 1;
    while(low <= high) {
        int mid = low + (high-low)/2;
        if(arr[mid] == target) {
            return true;
        }
        else {
            if(arr[mid] == arr[low] && arr[mid] == arr[high]) {
                low += 1;
                high -= 1;
                continue;
            }
            if(arr[mid] >= arr[low]) {
                if(target >= arr[low] && target <= arr[mid]) {
                    high = mid - 1;
                }
                else {
                    low = mid + 1;
                }
            }
            else if(arr[mid] <= arr[high]) {
                if(target >= arr[mid] && target <= arr[high]) {
                   low = mid + 1;
                }
                else {
                    high = mid - 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    vector<int> arr = {1,0,1,1,1};
    cout << inrotated(arr,0);
}