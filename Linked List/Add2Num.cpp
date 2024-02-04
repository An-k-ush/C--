#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data, Node* next) {
        this->data = data;
        this->next = next;
    }
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
    Node() {
        this->data =0;
        this->next =nullptr;
    }
};

Node* converttoLL(vector<int> v) {
    Node* head = new Node(v[0]);
    Node* temp = head;
    for(int i = 1; i < v.size(); i++) {
        Node* temp_2 = new Node(v[i]);
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
    cout << endl;
}

Node* addNum(Node* head1, Node* head2) {
    int carry = 0;
    int data = 0;
    Node* head3 = new Node();
    Node* temp = head3;
    while(head1 != nullptr || head2 != nullptr) {
        if(head1 != nullptr) {
            data += head1->data;
            head1 = head1->next;
        }
        if(head2 != nullptr) {
            data += head2->data;
            head2 = head2->next;
        }
        data += carry;
        carry = data/10;
        data %= 10;
        temp->data = data;
        data = 0;
        if(head1 == nullptr && head2 == nullptr && carry == 0) {
            temp->next = nullptr;
            return head3;
        }
        Node* temp_2 = new Node();
        temp->next = temp_2;
        temp =  temp->next;
    }
    if(carry != 0) {
        temp->data = carry;
    }
    return head3;

}

int main() {
    vector<int> v1 = {8,5,3,5};
    vector<int> v2 = {2,5,8};
    Node* head1 = converttoLL(v1);
    Node* head2 = converttoLL(v2);
    display(head1);
    display(head2);
    Node* head3 = addNum(head1, head2);
    display(head3);
}