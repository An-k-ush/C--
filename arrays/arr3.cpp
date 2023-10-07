#include<iostream>
using namespace std;
int main(){

    int arr[15] = {50,24,96,45,76,10,9,46,84,56,90,43,78,56,12};
    for(int i = 0; i<15; i++){
        if(arr[i]<35){
            cout<<i<<" = "<<arr[i]<<endl;
        }
    }
}