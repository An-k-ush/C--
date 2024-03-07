#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};

Node* createTree(Node* root) {
    cout << "Enter the Element : ";
    int data;
    cin >> data;
    if(data==-1) return nullptr;
    root = new Node(data);
    cout << "For the left of "<<data<<"\n";
    root->left = createTree(root->left);
    cout << "For the right of "<<data<<"\n";
    root->right = createTree(root->right);
    return root;
}

bool balanced(Node* root) {
    if(root == NULL) {
        return 0;
    }
    int left

}

int main() {
    Node* root = createTree(root);

}