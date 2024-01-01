#include<iostream>
using namespace std;
class Node {
    public:
    int data; 
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(Node* root) {
    int n;
    cout << "Enter the Data : ";
    cin >> n;
    root = new Node(n);
    if(n == -1) {
        return NULL;
    }
    cout << "Enter the data for inserting in left of "<<n<<endl;
    root->left = buildTree(root->left);
    cout << "Enter the data for inserting in right of "<<n<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main() {
    Node* root = NULL;
    root = buildTree(root);
}