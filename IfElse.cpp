#include<iostream>
using namespace std;

int main()
{
    int Budget;
    cout<<"What's Your Budget = ";
    cin>>Budget;
    

    if(Budget>10000)
    {
        cout<< "Lets Go Everywhere";
    }
    else if(Budget>5000){
        cout<<"Lets Go to Mall";
    }
    else if(Budget>1000){

        cout<<"Lets Go to Amusement Park";
    }
    else{
        cout<<"Let's Save some more Money";
    }
    
    











}