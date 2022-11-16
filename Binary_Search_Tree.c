#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node* left;
	struct node* right;
}node;
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->left = NULL;
	n->right = NULL;
	return n;
}

node* root=NULL;
node* current=NULL;

node* bst(node* n, int data){
	
	if(n==NULL){
		n = newnode(data);
		return n;
	}
	else if(data < n->data){
		n->left = bst(n->left, data);
	}
	else if(data > n->data){
		n->right = bst(n->right, data);
	}
	return n;
		
}
void inorder(node* temp){
	
	if(temp == NULL){
		return ;
	}
	inorder(temp->left);
	printf("%d", temp->data);
	inorder(temp->right);
}
	
int main(){
	printf("Enter the number of Nodes: ");
	int n;
	int num;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		printf("Enter the number: ");
		scanf("%d", &num);
		root = bst(root, num);
	}
	inorder(root);
}


