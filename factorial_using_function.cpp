#include<iostream>
using namespace std;

void fac(int n){
    int flag = 1;
    for(int i=1;i<=n;i++){
        flag = flag*i;
    }
    cout<<flag;
    return;
}

int main(){

    int n;
    cout << "Enter a number = ";
    cin >> n;
    fac(n);
}
