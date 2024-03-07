#include<bits/stdc++.h>
using namespace std;

void matsum(int *arr, int *arr2,int p,int q) {
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < q; j++) {
            cout << *((arr+i*q)+j)+*((arr2+i*q)+j)<<" ";
        }
        cout << endl;
    }
}

int main() {
    int p,q;
    cin>>p>>q;
    int arr[p][q];
    for(int i = 0; i <p; i++) {
        for(int j =0; j <q; j++) {
            cin >> arr[i][j];
        }
    }
    int arr2[p][q];
    for(int i = 0; i <p; i++) {
        for(int j =0; j <q; j++) {
            cin >> arr2[i][j];
        }
    }
    matsum((int*)arr,(int*)arr2,p,q);
}