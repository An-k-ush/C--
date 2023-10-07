#include<bits/stdc++.h>
using namespace std;
int bin_sea(vector<int>& v, int key) {
    int low = 0;
    int high = v.size() - 1;
    while(low <= high) {
        int mid = (high-low)/2 + low;
        if(key == v[mid]) {
            return mid;
        }
        else if(key > v[mid]) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}
int main() {
    vector<int> v = {1,5,3,7,9,0,2,12,6};
    sort(v.begin(),v.end());                                 // Iterative Code
    for(int i : v) {
        cout << i <<" ";
    }
    cout << endl;
    int k;
    cin >> k;
    cout << bin_sea(v, k);
}