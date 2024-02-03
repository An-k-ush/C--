#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
    }
    void display(Node* head) {
    Node* temp = head;
    while(temp != nullptr) {
        cout << temp->data<< " ";
        temp = temp->next;
    }
    cout <<"\n";
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



void ins_ert(Node*& head, int position, int data) {
    if(!position) {
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
    else {
        Node* temp = head;
        Node* temp_2 =  head->next;
        for(int i = 0; i < position-1; i++) {
            temp = temp->next;
            temp_2 = temp_2 ->next;
        }
        Node* temp_3 = new Node(data);
        temp ->next = temp_3;
        temp_3 ->next = temp_2;
    }
    
}

void del_ete(Node*& head, int position) {
    if(!position) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
    else {
        Node* temp = head;
        Node* temp_2 = head->next;
        for(int i = 0; i < position-1; i++) {
            temp = temp->next;
            temp_2 = temp_2->next;
        }
        temp->next =temp_2->next;
        delete temp_2;
    }
}

int main() {
    vector<int> v = {1,2,5,7,3,6};
    Node* head =  converttoLL(v);
    
    ins_ert(head, 0, 20);
    del_ete(head,0);
    del_ete(head,5);
    head->display(head);
}