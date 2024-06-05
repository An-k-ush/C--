#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
}Node;



Node* insertInBST(Node* root, int data) {
    if(!root) {
        Node* temp = (Node*)malloc(sizeof(Node));
        temp->data = data;
        temp->left = NULL;
        temp->right = NULL;
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
    Node* root = (Node*)malloc(sizeof(Node));
    root->data=arr[0];
    root->left = NULL;
    root->right = NULL;
    for(int i = 1; i < n; i++) {
        insertInBST(root, arr[i]);
    }
    printf("%d %d %d %d",root->data, root->left->data, root->right->data, root->left->left->data);
}