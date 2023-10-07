#include<iostream>
using namespace std;
// int main(){
//     int arr[4];
//     arr[0]=4;
//     arr[3]=7;
//     cout<<arr[2];
    
// }


int main(){
    int n;
    cout<<"Enter the size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter the "<<i+1<<" value of array = ";
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}