#include<iostream>
using namespace std;

// int main(){
//     int arr1[3]={10,20,30};
//     cout<<arr1<<endl;
//     cout<<arr1[2];
    
// }




// Taking array as an input

int main(){
    int n;
    cout << "Enter the size of array = ";
    cin >> n;
    int array[n];
    for(int i =0;i<n;i++){
        cout<<"Enter the "<<i+1<<" value of array = ";
        cin >> array[i];
    }
    for(int i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
}