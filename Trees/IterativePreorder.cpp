#include<bits/stdc++.h>
using namespace std;

class Node {
public:    
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        this->left=nullptr;
        this->right= nullptr;
    }
};

Node* createTree(Node* root) {
    cout << "Enter the Element : ";
    int n;
    cin >> n;
    if(n==-1) {
        return nullptr;
    }
    root = new Node(n);
    cout<<"Enter the left of "<<n<<endl;
    root->left = createTree(root->left);
    cout << "Enter the right of "<<n<<endl;
    root->right = createTree(root->right);
    return root;
}

void preorder(Node* root) {
    if(!root) return;
    stack<Node*> st;
    st.push(root);
    while(!st.empty()) {
        Node* temp = st.top();
        cout<<temp->data<<" ";
        st.pop();
        if(temp->right) st.push(temp->right);
        if(temp->left) st.push(temp->left);
    }
}

int main() {
    Node* root = createTree(root);
    preorder(root);
}