#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right= nullptr;
    }

};

Node* insertInBST(Node* root, int data) {
    if(!root) {
        Node* temp = new Node(data);
        return temp;
    }
    if(root->data > data) {
        root->left= insertInBST(root->left, data);
    }
    else {
        root->right = insertInBST(root->right, data);
    }
    return root;
}




int main() {
    int arr[] = {5,2,4,7,9,10,1,3,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    Node* root = new Node(arr[0]);
    for(int i = 1; i < n; i++) {
        insertInBST(root, arr[i]);
    }
    cout<<root->data<<" "<<root->left->data<<" "<<root->right->data<<" "<<root->left->left->data;
}