#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;
    Node(int data, Node* next, Node* prev) {
        this->data = data;
        this->next = next;
        this->prev = prev;
    }
    Node(int data) {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
    Node* createDLL(vector<int>& v) {
        Node* head = new Node(v[0]);
        Node* temp = head;
        for(int i = 1; i < v.size(); i++) {
            Node* temp_2 = new Node(v[i],NULL,temp);
            temp->next = temp_2;
            temp = temp_2;
        }
        return head;
    }
    void display() {
        Node* temp = this;
        while(temp != nullptr) {
            cout << temp->data<<" ";
            temp = temp->next;
        }
        cout <<"\n";
    }
    int length() {
        Node* temp = this;
        int count = 0;
        while(temp != nullptr) {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

void ins_ert(Node* &head, int data, int position) {
    Node* temp = head;
    if(position == 1) {
        Node* temp_2 = new Node(data,temp,nullptr);
        head = temp_2;
        temp->prev = head;
    }
    else {
        for(int i = 1; i < position-1; i++) {
            temp = temp->next;
        }
        Node* temp_2 = new Node(data, temp->next, temp);
        if(temp_2->next != nullptr) {
            (temp_2->next)->prev = temp_2;
        }
        temp->next = temp_2;
    }
}
void reverseDLL(Node* &head) {
    while(1) {
        Node* temp_2 = head->prev;
        head->prev = head->next;
        head->next = temp_2;
        if(head->prev == nullptr) {
            break;
        }
        head = head->prev;
    }

}


int main() {
    vector<int> v = {4,12,3,9,10,2};
    Node* head = head->createDLL(v);
    head->display();
    cout << head->length()<<"\n";
    ins_ert(head,5,1);
    head->display();
    cout << head->length()<<"\n";
    ins_ert(head,6,7);
    head->display();
    cout << head->length()<<"\n";
    reverseDLL(head);
    head->display();
}