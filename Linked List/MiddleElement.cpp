#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    Node() {

    }
};

Node* createLL(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for(int i = 1; i < arr.size(); i++) {
        Node* temp_2 = new Node(arr[i]);
        temp->next = temp_2;
        temp = temp_2;
    }
    return head;
}

void display(Node* head) {
    while(head != nullptr) {
        cout << head->data<<" ";
        head = head->next;
    }
    cout <<"\n";
}

void findmidd(Node* head) {
    Node* temp = head;
    int counter = 0;
    while(head->next != nullptr) {
        counter++;
        if(counter%2 != 0) {
            temp = temp->next;
        }
        head = head->next;
    }
    cout << temp->data;
}

int main() {
    vector<int> arr = {2,2,3,5};
    Node* head = createLL(arr);
    findmidd(head);
}