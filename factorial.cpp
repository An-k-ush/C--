#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Input the number = ";
    cin>>n;
    int flag = 1;
    if(n>=1){
        for(int i = 1;i<=n;i++){
            flag = i*flag;
        }
        cout << flag;
    }
    else if(n==0){
        cout << flag;
    }
    else{
        cout << "Enter a valid no for factorial";
    }
}