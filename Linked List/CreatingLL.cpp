#include<bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;

class Node{
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = nullptr;
    }
};

Node* buildLL(Node* ll) {
    int data;
    cout << "Enter the Data : ";
    cin >> data;
    ll = new Node(data);
    if(data == -1) {
        return NULL;
    }
    cout << "After "<<data<<" ";
    ll->next = buildLL(ll->next); 
    return ll;
}

Node* convertArrIntoLL(vector<int> v) {
    Node* head = new Node(v[0]);
    Node* mover = head;
    for(int i = 1; i < v.size(); i++) {
        Node* temp = new Node(v[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

int main() {
    vector<int> v = {2,4,6,8,10};
    Node* ll2 = convertArrIntoLL(v);
    Node* temp = ll2;
    while(temp) {
        cout << temp->data<<" ";
        temp = temp->next;
    }
    cout << endl;
    for(Node* temp = ll2; temp != NULL; temp = temp->next) {
        cout << temp->data<<" ";
    }
}