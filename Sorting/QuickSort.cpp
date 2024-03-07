#include<bits/stdc++.h>
using namespace std;

void quicksort(int arr[], int first, int last) {
    if(first == last) {
        return;
    }
    int cnt = 0;
    // for(int i = first+1; i<=last; i++) {
    //     if(arr[first]>=arr[i]) cnt++;
    // }
    // int temp = arr[cnt];
    // arr[cnt] = arr[first];
    int x = first+1;
    int y = last;
    while(y>x) {
        while(arr[first]>=arr[x]&& x<=last-1) {
            x++;
        }
        while(arr[y]>arr[first]&&y>=first+1) {
            y--;
        }
        if(x<y)swap(arr[x],arr[y]);

    }
    swap(arr[first],arr[x-1]);
    
    quicksort(arr,first,x-1);
    quicksort(arr,x+1,last);
}

int main() {
    int arr[] = {4,6,2,5,7,9,1,3};
    int n = 8;
    quicksort(arr,0,n-1);
    for(int i = 0; i<n; i++) {
        cout << arr[i]<<" ";
    }
}