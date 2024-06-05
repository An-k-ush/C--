#include<bits/stdc++.h>
using namespace std;
class student {
    public:
    string name;
    int roll_no;
    string phone_no;
    string address;
    student(string w, int x, string y, string z) {
        name = w;
        roll_no = x;
        phone_no = y;
        address =z;
    }
    void print() {
        cout<<"Name: "<<name;
        cout<<"\nRollNo: "<<roll_no;
        cout<<"\nPhoneNo: "<<phone_no;
        cout<<"\nAddress: "<<address<<endl;
    }
};
int main() {
    student A("john",2,"99999","XYZ");
    student B("sam",3,"11222","sadddd");
    A.print();
    B.print();
}