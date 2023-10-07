#include<iostream>
using namespace std;

int main(){
    
    int row;
    cout<<"Input Number of rows = ";
    cin>>row;
    int i;
    int j;
    int column;
    cout<<"Input Number of Columns = ";
    cin >> column;

    for(i=1;i<=row;i++){
        for(j=1;j<=column;j++){
            cout<<"*  ";
        }
        cout<<endl;
    }

}