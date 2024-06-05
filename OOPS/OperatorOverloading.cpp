#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
    int y;
    int z;
public:
    A(int x, int y, int z) {
        this->x = x;
        this->y = y;
        this->z = z;
    }
    void display() {
        cout<<"x: "<<this->x<<endl;
        cout<<"y: "<<this->y<<endl;
        cout<<"z: "<<this->z<<endl;
    }
    A operator++() {
        this->x++;
        this->y++;
        this->z++;
        return *this;
    }
    A operator++(int) {
        A temp = *this;
        this->x++;
        this->y++;
        this->z++;
        return temp;
    }
    A operator+(A obj2) {
        A obj3(this->x+obj2.x,this->y+obj2.y,this->z+obj2.z);
        return obj3;
    }
};

int main() {
    A obj(1,2,3);
    obj.display();
    A obj2(1,2,3);
    A obj3 = obj + obj2;
    obj3.display();
}