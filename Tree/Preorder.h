#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;

void preorder(node* temp){
    if(temp == NULL){
        return;
    }
    printf("%d", temp->data);
    preorder(temp->left);
    preorder(temp->right);
}