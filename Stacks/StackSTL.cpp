#include<iostream>
#include<stack>
using namespace std;

void printstack(stack<int> st) {                  // Original stack doesnt change as this is copy
    while(!st.empty()) {
        cout << st.top()<<" ";
        st.pop();
    }
}

int main() {
    //Creation
    stack<int> st;             //LIFO Data Stucture
    st.push(10);
    st.push(20);
    st.push(30);                // Pushes the  element by making the copt of it on top of previous
    st.push(40);
    cout <<st.top()<<endl;                   // Returns the top element
    st.pop();                      // Deletes the top element and dont return anything
    cout << st.top()<<endl;
    cout << st.empty()<<endl;                  // returns true if stack is empty
    cout << st.size()<<endl;                    // returns the no of elements in stack
    cout << endl<<endl;
    stack<int> stt;
    stt.push(15);
    stt.push(30);
    stt.push(45);
    stt.push(60);
    printstack(stt);
    cout <<endl <<stt.top();                        // Original stack doesnt change as this is copy
}