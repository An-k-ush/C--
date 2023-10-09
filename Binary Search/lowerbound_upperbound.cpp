 #include<bits/stdc++.h>
 using namespace std;

int bsupp(int arr[], int n) {
    int low = 0;
    int high = 5;
    int upperbound = -1;
    while(low <= high) {
        int mid = (high - low)/2 + low;
        if(arr[mid] > n) {
            upperbound = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;;
        }
    }
    return upperbound;
}
int bslow(int arr[], int n) {
    int low = 0;
    int high = 5;
    int lowerbound = -1;
    while(low <= high) {
        int mid = (high - low)/2 + low;
        if(arr[mid] >= n) {
            lowerbound = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return lowerbound;
}
int main() {
    int arr[] = {3,4,5,8,15,19};
    int n;
    cin >> n;
    int lowerbound = bslow(arr, n);
    cout << lowerbound << endl;
    // Using STL
    int lb = lower_bound(arr,arr + 6,n)-arr;
    cout << lb<<endl;
    cout << bsupp(arr, n)<<endl;
    cout << upper_bound(arr, arr+6, n)-arr;
}
