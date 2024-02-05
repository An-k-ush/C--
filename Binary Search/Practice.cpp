#include<iostream>
#include<vector>
using namespace std;

int bin_search(vector<int> &v, int key) {
    int high = v.size() - 1;
    int low = 0;
    while(low<=high) {
        int mid = low + (high-low)/2;
        if(v[mid] == key) {
            return mid;
        }
        else if(v[mid] < key) {
            low = mid+1;
            mid = low + (high-low)/2;
        }
        else {
            high = mid - 1;
            mid = low + (high-low)/2;
        }
    }
    return -1;
}

int bslow(vector<int> &v, int key) {
    int high = v.size() - 1;
    int low = 0;
    int lowerbound = -1;
    while(low<= high) {
        int mid = low + (high-low)/2;
        if(v[mid] >= key) {
            high = mid - 1;
            lowerbound = mid;
        }
        else {
            low = mid+1;
        }
    }
    return lowerbound;
}

int bsupp(vector<int> &v, int key) {
    int high = v.size() - 1;
    int upperbound = -1;
    int low = 0;
    
    while(low<= high) {
        int mid = low + (high-low)/2;
        if(v[mid] > key) {
            high = mid - 1;
            upperbound = mid;
        }
        else {
            low = mid+1;
        }
    }
    return upperbound;
}

int main() {
    vector<int> v = {10,20,30,40,50,50,60,70};
    cout << bsupp(v,40)<<endl;
    cout << bslow(v,50);

}