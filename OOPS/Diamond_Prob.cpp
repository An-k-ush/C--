#include<iostream>

class A{
public:
    int x;
    void setX(int x) {
        this->x = x;
    }
    void getX() {
        std::cout << x << std::endl;
    }
    // A(int x) {
    //     this->x = x;
    // }
};
class B : virtual public A {
    int y;
public:
    void setY(int y) {
        this->y = y;
    }
    void getY() {
        std::cout << y << std::endl;
    }
    // B(int x, int y) : A(x) {
    //     this->y = y;
    // }
};
class C : virtual public A {
    int z;
public:
    void setZ(int z) {
        this->z = z;
    }
    void getZ() {
        std::cout << z << std::endl;
    }
    // C(int x, int z) : A(x) {
    //     this->z = z;
    // }
};
class D : public B, public C {
    int p;
public:
    void setP(int p) {
        this->p = p;
    }
    void getP() {
        std::cout << p << std::endl;
    }
    // D(int x, int y, int z, int p) : A(x), B(x,y), C(x,z)
    // {
    //     this->p = p;
    // }
};


int main() {
    D app;
    app.getP();
    app.getZ();
    app.getY();
    app.getX();
    int* ptr = &app.C::x;
    int* ptr2 = &app.B::x;
    std::cout << ptr<<std::endl;
    std::cout << ptr2<<std::endl;
}