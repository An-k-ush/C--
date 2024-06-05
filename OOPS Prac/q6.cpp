#include<bits/stdc++.h>
using namespace std;
class Employee {
    int salary, noOfH;
    public:
    void getInfo(int s, int n) {
        salary = s;
        noOfH = n;
    }
    void AddSal() {
        if(salary<500) salary+=10;
    }
    void AddWork() {
        if(noOfH>6) salary+=5;
    }
    void print() {
        cout<<"$"<<salary<<"\n";
    }
};
int main() {
    Employee A;
    A.getInfo(490,5);
    A.AddSal();
    A.AddWork();
    A.print();
}