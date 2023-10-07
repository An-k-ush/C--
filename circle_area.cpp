#include<iostream>
using namespace std;

float area(float* r){

    *r = 3.14*(*r)*(*r);

}

int main(){
    float r;
    cout<<"Input the radius = ";
    cin>>r;
    float* ptr = &r;
    area(ptr);
    cout<<"Area = "<<r;
}