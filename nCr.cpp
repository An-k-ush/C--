#include<iostream>
#include<math.h>
using namespace std;

int fac(int n){
    int flag = 1;
    for(int i=1;i<=n;i++){
        flag = flag*i;
    }
    return flag;
}

int nCr(int n, int r){
    int a = fac(n)/fac(n-r)/fac(r);
    return a;
}

int main(){
    int n;
    int r;
    cout << "Enter n = ";
    cin >> n;
    cout << "Enter r = ";
    cin >> r;
    
    cout<<nCr(n, r);
}