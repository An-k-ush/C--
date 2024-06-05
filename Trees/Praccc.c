#include<stdio.h>
#include<stdlib.h>

typedef struct Treenode {
    int data;
    Treenode* left;
    Treenode* right;
}Treenode;

int main() {
    Treenode* root = (Treenode*)malloc(sizeof(Treenode));
    root->left = (Treenode*)malloc(sizeof(Treenode));
    
}