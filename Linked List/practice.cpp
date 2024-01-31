#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
    }
};

Node* converttoLL(vector<int> v) {
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i = 1; i < v.size(); i++) {
        Node* temp_2 = new Node(v[i]);
        temp ->next = temp_2;
        temp = temp->next;
    }
    temp->next = nullptr;
    return head;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data<< " ";
        temp = temp->next;
    }
    cout <<"\n";
}

void ins_ert(Node*& head, int position, int data) {
    if(!position) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    
}

int main() {
    vector<int> v = {1,2,5,7,3,6};
    Node* head =  converttoLL(v);
    display(head);
    ins_ert(head, 0, 20);
    display(head);
}