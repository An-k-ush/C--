#include<iostream>
using namespace std;

int main(){

    int row;
    int column;
    int i;
    int j;
    cout << "Input Number of rows = ";
    cin >> row;
    cout << "Input Number of Columns = ";
    cin >> column;

    for(i=1;i<=row;i++){

        if(i==1 || i==row){
            for(j=1;j<=column;j++){
                cout << "*";
            }
        }
        else{
            for(j=1;j<=column;j++){
                if(j==1 || j==column){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }

        }
        cout << endl;

    }

}