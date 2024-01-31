#include<bits/stdc++.h>
using namespace std;
template<class T>
class Stack{
private:
    int top = -1;
    vector<T> v;
public:
    void push(T data) {
        v.push_back(data);
        this->top++;
    }
    T get_Top() {
        if(this->top != -1) {
            return v[this->top];
        }
        else {
            cout << "Stack is Empty"<<endl;
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
    Stack<string> st;
    st.push("Ank");
    st.push("Ush");
    cout <<st.get_Top()<<endl;
    st.pop();
    cout << st.get_Top()<<endl;
    cout << st.size()<<endl;
    cout << st.isEmpty()<<endl;
    st.pop();
    cout << st.isEmpty()<<endl;
}
