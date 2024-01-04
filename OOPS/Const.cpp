#include<bits/stdc++.h>
using namespace std;

class abc {
    int x;
    int y;
    int z;
public:
    abc(int _x, int _y, int _z = 0) : x(_x), y(_y), z(_z) {}              // THis is a intitialisation list
    void getter() const {                                          // setting methods const
        cout << "x = "<< x<<" \ny = "<<y<<" \nz = "<<z;
    }
};

int main() {
    // const int* a = new int(5); // Same as >>> int const *a = new int(5);
    // int b = 10;
    // a = &b;
    // cout << *a<<endl;

    // int* const x = new int(5);
    // *x = 10;
    // cout << *x<<endl;

    // const int* const p = new int(5);                 // Can't Change this




    abc ter(1,2);

}
// mutable keyword is used to change the value of a const variable
// although it is not a good practice and is used for mainly debugging purposes
