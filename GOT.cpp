#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<< "Enter The First No = ";
    cin>> a;
    cout<< "Enter the Second No = ";
    cin>> b;
    cout<< "Enter The Third No =";
    cin>> c;

    if(a>b){
        if(a>c){
            cout<< "The Biggest No is "<< a;
        }
        else if(a==c){
            cout<< "Both "<<a<<" and "<<c<<" are biggest as they are equal ";
        }
        else
        {
            cout<< "The Biggest No Is "<< c;
        }
            
        
    }
    else if(b>a){
                    if(b>c){
                                cout<< "Biggest is b";
        }
                else if(b==c){
                                cout<<"b and c have same value";
        }
        else{
            cout<<"Biggest No is "<< c;
        }
    }
    else{
        if(b>c){
            cout<<"Biggest are b and a ";
        }
        else if(b==c){
            cout<<"All have same value";
        }
        else{
            cout<<"Biggest is "<<c;
        }
    }




}