#include<bits/stdc++.h>
using namespace std;

int peak_Element(vector<int> arr) {
    int low = 1, high = arr.size() - 2;
    if(arr.size() == 1) {
        return 0;
    }
    if(arr[0] > arr[1]) {
        return 0;
    }
    else if (arr[arr.size()-1] > arr[arr.size()-2]) return arr.size() -1;
    int mid;
    while(low <= high) {
        mid = low + (high-low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) return mid;
        if(arr[mid] < arr[mid-1]) high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1,2,1,3,4};
    cout << peak_Element(arr);
}