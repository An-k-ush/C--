#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
    cout<<"Input any +ve no = ";
    cin>>n;
    for(i=2;i<=n-1;i++){
        if(n%i==0){
            cout<<"The no given is Non-Prime";
            break;
        }

    }
    if(i==n){
        cout<<"The No is Prime"<<endl;
    }
    return 0;
}