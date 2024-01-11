#include<iostream>
#include<string>

class A{
private:
    friend class B;
    int x;
    int y;
    int z;
};

class B : public A{
public:
    void setX(int x) {
        this->x;
    }
};


int main() {
    B app;
}