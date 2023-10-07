#include<iostream>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Enter the second number = ";
    cin>>b;
    int* p1=&a;
    int* p2=&b;
    cout<<*p1+*p2;
}