#include<iostream>
#include<math.h>
using namespace std;

void print(int num){
    cout<<num<<endl;
    return;
}
int add(int num1, int num2){
    print(num1);
    print(num2);
    int sum = num1 +num2;
    return sum;
}
int main(){
    int a;
    int b;
    cout<<"Enter the first number = ";
    cin>>a;
    cout<<"Enter the second number = ";
    cin>>b;
    cout<<add(a,b)<<endl;
    return 0;
}