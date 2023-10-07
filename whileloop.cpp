#include<iostream>
using namespace std;

int main(){

    int n;
    cout<< "Give +ve no to get Some output = ";
    cin>> n;
    while(n>0){
        if(n>10){
            cout<<"You will Have a Great day"<<endl;
        
        }
        else{
            cout<<"I hope your Luck gets better"<<endl;
        }
        cout<<"You can try again by entering a +ve no = ";
        cin>>n;
    }
    return 0;    



}