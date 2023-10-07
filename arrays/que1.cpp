#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array = ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Which element index you want to find = ";
    cin>>x;
    bool flag = false;
    for(int i = 0;i<n;i++){
        if(arr[i]==x){
            flag = true;
        }
    }
    if(flag==true){
        cout<<"The Number is present";
    }
    else{
        cout<<"the number is absent";
    }
    
}

