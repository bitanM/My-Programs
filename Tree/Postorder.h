#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;

void postorder(node* temp){
    if(temp == NULL){
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    printf("%d", &temp->data);
}