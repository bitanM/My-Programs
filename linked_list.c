#include<stdio.h>
#include<stdlib.h>
// creating a datatype of node, which wiil build the list.
typedef struct node{
	int data;
	struct node* link;
} node;
// function that will make new nodes when called.
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->link = NULL;
	return n;
}
node* head;
int main(){
	node* N1 = newnode(14);
	node* N2 = newnode(15);
	node* N3 = newnode(16);
	
	N1->link = N2;
	N2->link = N3;	
	
	// inserting a node at the head of the list.
	head = (node*)malloc(sizeof(node));
	head->link = N1;
	node* N0 = newnode(13);
	N0->link = N1;
	head = N0;
	
	// inserting a node at the end of the list.
	node* N4 = newnode(17);
	node* temp = (node*)malloc(sizeof(node));
	temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = N4;
	
	// inserting a node at any random position of the node.
	node* N5 = newnode(18);
	int count = 1;
	node* temp2 = (node*)malloc(sizeof(node));
	temp2 = head;
	while(temp2->link!=NULL && count<=2){
		temp2 = temp2->link;
		count++;
	}
	N5->link = temp2->link;
	temp2->link = N5;
	
	// removing a node from the head of a list.
	node* del1 = (node*)malloc(sizeof(node));
	del1 = head;
	head = head->link;
	free(del1);
	
	// removing a node from the end of a list.
	node* del2 = (node*)malloc(sizeof(node));
	del2 = head;
	while(del2->link->link!=NULL){
		del2 = del2->link;
	}
	free(del2->link->link);
	del2->link=NULL;
	
	// removing a node from any random position of a list.
	node* del3 = (node*)malloc(sizeof(node));
	del3 = head;
	int count_dl = 1;
	while(del3->link->link!=NULL && count_dl<=1){
		del3 = del3->link;
		count_dl++;
	}
	del3->link = del3->link->link;
	free(del3->link->link);
	
	// printing the list.
	node* support = (node*)malloc(sizeof(node));
	support = head;
	while(support!=NULL){
		printf("%d ", support->data);
		support = support->link;
	}
	printf("\n");
}

