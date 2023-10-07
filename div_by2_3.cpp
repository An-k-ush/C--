#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Enter a +ve number = ";
    cin >> n;
    if(n%2 == 0 && n%3 == 0){
        cout<<"The Number is divisible by both 2 and 3";
    }
    else if(n%2 == 0 && n%3 != 0){
        cout<<"The Number is divisible by 2 but not divisible by 3";
    }
    else if(n%2 != 0 && n%3 == 0){
        cout<<"The Number is only divisible by 3 not 2";
    }
    else{
        cout<<"The number is not divisible by 2 nor 3";
    }
    
}