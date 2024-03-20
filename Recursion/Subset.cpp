#include<bits/stdc++.h>
using namespace std;

void printsub(vector<int>arr,vector<int>arr2,int i) {
    if(i==arr.size()) return;
    arr2.push_back(arr[i]);
    printsub(arr,arr2,i+1);
    for(auto j : arr2) {
        cout<<j<<" ";
    }
    cout<<endl;
    arr2.pop_back();
    printsub(arr,arr2,i+1);
    return;

}
void print_sub(vector<int>arr) {
    vector<int>arr2;
    printsub(arr,arr2,0);
}

int main() {
    vector<int> arr = {1,2,3,4};
    print_sub(arr);
}