#include<bits/stdc++.h>
using namespace std;

class treeNode {
public:
    int data;
    treeNode* left;
    treeNode* right;
    treeNode(int data) {
        this->data =  data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

void inorder(treeNode* root) {
    if(!root) {
        return;
    }
    inorder(root->left);
    cout << root->data<<" ";
    inorder(root->right);
}
void preorder(treeNode* root) {
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(treeNode* root) {
    if(!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->data<<" ";
}
void bfs(treeNode* root) {
    if(!root) return;
    queue<treeNode*> q;
    q.push(root);
    while(!q.empty()) {
        int len = q.size();
        for(int i = 0; i < len; i++) {
            treeNode* temp = q.front();
            cout << temp->data<<" ";
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            q.pop();
        }
    }
    cout<<endl;
}

treeNode* createTree(treeNode* root) {
    cout << "Enter the Element : ";
    int n;
    cin >> n;
    if(n==-1) {
        return nullptr;
    }
    root = new treeNode(n);
    cout<<"Enter the left of "<<n<<endl;
    root->left = createTree(root->left);
    cout << "Enter the right of "<<n<<endl;
    root->right = createTree(root->right);
    return root;
}

int main() {
    treeNode* root = createTree(root);
    inorder(root);
    cout<<"\n";
    preorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    bfs(root);
}