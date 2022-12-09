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
//~ void userinlist(int data){
	//~ node* n = newnode(data);
	//~ if(root == NULL){
		//~ root = n;
		//~ //n->next = root;
		//~ return;
	//~ }
	//~ node* temp = root;
	//~ if(temp->left == NULL){
		//~ temp->left = n;
	//~ }
	//~ else if(temp->right == NULL){
		//~ temp->right = n;
	//~ }
	
		
	//~ if(temp->left == NULL){
		//~ userinlist
	//~ while(temp->next != root){
		//~ temp = temp->next;
	//~ }
	//~ temp->next = n;
	//~ n->next = root;
	 
//~ }
int no_of_nodes;
node* make_tree(int data){
	node* n = newnode(data);
	if(no_of_nodes>=data+1){
		n->left=make_tree(data+1);
	}
	if(no_of_nodes>=data+2)
		n->right=make_tree(data+2);
	return n;
}
int main(){
	printf("Enter the number of nodes: ");
	scanf("%d", &no_of_nodes);
	make_tree(1);
}
