#include<bits/stdc++.h>
using namespace std;

class Twostack {
    int top1;
    int top2;
    int len;
    int* arr;
public:
    Twostack(int size) {
        this->len = size;
        arr = new int[len];
        top1= -1;
        top2 = len;
    }
    void push1(int data) {
        if(top2 - top1 == 1) {
            cout << "Stack Overflow"<<endl;
            return;
        }
        top1++;
        arr[top1] = data;
    }
    void push2(int data) {
        if(top2 - top1 == 1) {
            cout << "Stack Overflow"<<endl;
            return;
        }
        top2--;
        arr[top2] = data;
    }
    void pop1() {
        if(top1 == -1) {
            cout << "Stack Underflow"<<endl;
            return;
        }
        top1--;
    }
    void pop2() {
        if(top2 == len) {
            cout << "Stack Underflow"<<endl;
            return;
        }
        top2++;
    }
    int get_top1() {
        if(top1 != -1) {
            return arr[top1];
        }
        else {
            cout << "Stack is empty"<<endl;
        }
    }
    int get_top2() {
        if(top2 != len) {
            return arr[top2];
        }
        else {
            cout << "Stack is empty"<<endl;
            return 0;
        }
    }
};

int main() {
    Twostack s(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
    s.push1(10);
}