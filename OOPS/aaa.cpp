#include<bits/stdc++.h>
using namespace std;

class A {
    public:
        int x;
    
};
class C : public A {
    public:
        int z = 3;
        C() {
            this->x = 20;
        }
};
class B : public A {
    public:
        int y = 2;
        B() {
            this->x = 10;
        }
};

class D : public C, public B {
    public :
        int T;
};

int main() {
    D d;
    cout<<d.C::x<<endl;
}