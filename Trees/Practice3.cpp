#include<bits/stdc++.h>
using namespace std;

typedef struct Treenode {
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int val) {
        data = val;
        left = right = nullptr;
    }
}Treenode;

void inorder(Treenode* root) {
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    return;
}

void bfs(Treenode* root) {
    if(!root) return;
    queue<Treenode*>q;
    q.push(root);
    while(!q.empty()) {
        int s = q.size();
        for(int i = 0; i < s; i++) {
            Treenode* temp = q.front();
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
            cout<<temp->data<<" ";
            q.pop();
        }
        cout<<endl;
    }
}

int main() {
    Treenode* root = new Treenode(1);
    root->left = new Treenode(2);
    root->right = new Treenode(3);
    root->left->right = new Treenode(4);
    root->left->left = new Treenode(5);
    root->right->left = new Treenode(6);
    root->right->right = new Treenode(7);
    inorder(root);
    cout<<endl;
    bfs(root);
}