#include<iostream>
using namespace std;

void fl(int n, int* q, int* e){

    *q=n%10;
    while(n>=10){
        n = n/10;
        
    }
    *e = n;
    
    return;
}

int main(){

    int n,q,e;
    cout<<"Input a number = ";
    cin>>n;
    int* ptr_1= &q;
    int* ptr_2= &e;
    fl(n,&q,&e);
    cout<<"First digit = "<<*ptr_2<<endl;
    cout<<"Last digit = "<<*ptr_1;
    
}