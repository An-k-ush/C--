#include<iostream>
using namespace std;
int main(){
    int a =6;
    int* ptr1=&a;
    int** dptr1=&ptr1;
    cout<<*dptr1<<" "<<**dptr1<<" "<<dptr1<<" "<<ptr1;
}