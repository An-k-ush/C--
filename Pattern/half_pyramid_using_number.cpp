#include<iostream>
using namespace std;

int main(){

    int n;
    cout << "Input the Number of rows = ";
    cin >> n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++){
            cout << i<<" ";
        }
        cout << endl;
    }
}