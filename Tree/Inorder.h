#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;

void inorder(node* temp){
	
	if(temp == NULL){
		return ;
	}
	inorder(temp->left);
	printf(" %d", temp->data);
	inorder(temp->right);
}
