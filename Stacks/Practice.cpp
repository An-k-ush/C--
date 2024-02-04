#include<iostream>
using namespace std;

class stack {
private:
    int top;
    int* arr;
    int len;
public:
    stack(int size) {
        this->len = size;
        arr = new int[size];
        top = -1;
    }
    void push(int data) {
        if(top == len -1) {
            cout << "Stack is full"<<endl;
            return;
        }
        top += 1;
        arr[top] = data;
    }
    void pop() {
        if(top != -1) {
            top -= 1;
        }
        else {
            cout << "Stack is empty"<<endl;
        }
    }
    bool isempty() {
        if(top == -1) {
            return 1;
        }
        else {
            return 0;
        }
    }
    int get_top() {
        if(top != -1) {
            return arr[top];
        }
        else {
            cout << "Stack is empty"<<endl;
        }
    }
    int size() {
        return top+1;
    }
    
};

int main() {
    stack s(10);
    s.push(1);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(10);
    s.push(20);
    s.push(30);
    cout << s.size()<<endl;
    cout << s.get_top();
}