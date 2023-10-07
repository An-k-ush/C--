#include<iostream>
using namespace std;

int main(){

    int a;
    int b;
    cout<<"Enter the left limit = ";
    cin>>a;
    cout<<"Enter the right limit = ";
    cin>>b;
    int i;
    int j;
    for(i=a;i<=b;i++){
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            cout<<i<<endl;
        }
    }
}