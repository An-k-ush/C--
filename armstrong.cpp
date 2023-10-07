#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number = ";
    cin>>n;
    int flag = 0;
    int originaln = n;
    while(n>0){
        int lastdigit = n%10;
        flag = flag + round(pow(lastdigit,3));
        n = n/10;
    }
    if(flag==originaln){
        cout<<"The Number is armstrong";

    }
    else{
        cout<<"The Number is not armstrong";
    }
}