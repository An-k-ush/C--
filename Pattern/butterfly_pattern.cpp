#include<iostream>
using namespace std;

int main(){
    int n;
    int i;
    int j;
    cout<<"Enter no of rows = ";
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=2*n;j++){
            if(j<=i || j>=2*n+1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout << endl;
    }
    for(i=n;i>=1;i--){
        for(int j=1;j<=2*n;j++){
            if(j<=i || j>=2*n+1-i){
                cout<<"*";
            }
            else{
                cout<<" ";
            }

        }
        cout<<endl;
    }
}