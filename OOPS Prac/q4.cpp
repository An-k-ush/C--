#include<bits/stdc++.h>
using namespace std;
class Rectangle {
    int length,breadth;
    public:
    Rectangle() {
        length = 0;
        breadth = 0;
    }
    Rectangle(int length, int breadth) {
        this->breadth = breadth;
        this->length = length;
    }
    Rectangle(int side) {
        length = breadth = side;
    }
    void area() {
        cout<<length*breadth<<endl;
    }
};
int main() {
    Rectangle R1;
    Rectangle R2(5,2);
    Rectangle R3(5);
    R1.area();
    R2.area();
    R3.area();
}