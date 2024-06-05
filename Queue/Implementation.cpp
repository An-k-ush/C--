#include<iostream>
using namespace std;

class queue {

private:
    int size;
    int *arr;
    int front;
    int rear;
public:
    queue(int size) {
        this->size = size;
        arr = new int[size];
        front = 0;
        rear = 0;
    }
    void push(int data) {
        if(rear == size) {
            cout<<"Queue is full"<<endl;
            return;
        }
        arr[rear] = data;
        rear++;
    }
    void pop() {
        if(rear == front) {
            cout<<"Queue is empty"<<endl;
            return;
        }
        arr[front] = -1;
        front++;
        if(front == rear) {
            front = 0;
            rear = 0;
        }
    }
    bool is_empty() {
        if(rear == front) {
            return true;
        }
        else {
            return false;
        }
    }
    int Front() {
        if(rear==front) {
            cout<<"Queue is empty"<<endl;
            return 0;
        }
        return arr[front];

    }
};

int main() {
    queue q(5);
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.pop();
    cout<<q.Front()<<endl;
    q.push(6);
    
}