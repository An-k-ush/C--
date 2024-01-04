#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data =  data;
        next = nullptr;
    }
};

Node* createLL(vector<int> v) {
    Node* head = new Node(v[0]);
    Node* mover = head;
    for(int i = 1; i < v.size(); i++) {
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

void printLL(Node* head) {
    Node* temp = head;
    while(temp) {
        cout << temp->data<<" ";
        temp = temp->next;
    }
}

Node* remHead(Node* head) {
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* remTail(Node* head) {
    if(head == nullptr || head->next == nullptr) {
        return nullptr;
    }
    Node* temp = head;
    while((temp->next)->next != nullptr) {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

Node* delelem(Node* head, int k) {
    if(k<=0 || head == nullptr) return head;
    Node* temp = head;
    if(k==1) {
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;
    while(count < k-2 && temp != nullptr) {
        temp = temp->next;
        count++;
    }
    if(temp==nullptr || temp->next == nullptr) return head;

    Node* temp_2 = temp->next;
    temp->next = (temp->next)->next;
    delete temp_2;
    return head;
}

int main() {
    vector<int> v = {2,3,7,42,33,22,54};
    Node* head = createLL(v);
    printLL(head);
    cout << endl;
    head = delelem(head,9);
    printLL(head);
}