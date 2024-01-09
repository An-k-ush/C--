#include<bits/stdc++.h>
using namespace std;

class Stack{
private:
    int top = -1;
    vector<int> v;
public:
    void push(int data) {
        v.push_back(data);
        this->top++;
    }
    int get_Top() {
        if(this->top != -1) {
            return v[this->top];
        }
        else {
            cout << "Stack is Empty"<<endl;
            return INT32_MIN;
        }
    }
    void pop() {
        if(this->top != -1) {
            v.pop_back();
            this->top--;
        }
        else {
            cout << "Stack is already Empty"<<endl;
        }
    }
    bool isEmpty() {
        if(this->top == -1) {
            return true;
        }
        else {
            return false;
        }
    }
    int size() {
        return (this->top)+1;
    }

};

int main() {
    Stack st;
    st.push(10);
    st.push(20);
    cout <<st.get_Top()<<endl;
    st.pop();
    cout << st.get_Top()<<endl;
    cout << st.size()<<endl;
    cout << st.isEmpty()<<endl;
    st.pop();
    cout << st.isEmpty()<<endl;
}
