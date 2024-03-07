#include<bits/stdc++.h>
using namespace std;

class Second;
class First {
    int a;
    friend class Second;
public :
    First(int a) {
        this->a =a;
    }
};

class Second {
public:
    int b;
    void getsum(First obj) {
        int sum = obj.a + b;
        cout << sum<<endl;
    }    
    Second(int b) {
        this->b = b;
    }
};

int main() {
    First obj(10);
    Second obj2(20);
    obj2.getsum(obj);
}