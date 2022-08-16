#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node* prev;
	struct node* next;
}node;
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->prev = NULL;
	n->next = NULL;
	return n;
}
node* head;
node* last;
void userinlist(int data){
	node* n = newnode(data);
	if(head == NULL){
		head = n;
		n->next = head;
		return;
	}
	node* temp = head;
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	last = n; 
}
void insertathead(int data){
	node* temp = head;
	node* n = newnode(data);
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
}
void show(){
	node* temp = head;
	while(temp->next != head){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
}
int main(){
	printf("Making a circular linked list.\n");
	while(true){
		printf("\nTo insert a node press 1\n");
		printf("To show the node 2\n");
		printf("To insert at head press 3\n");
		int n;
		int data;
		scanf("%d", &n);
		if(n == 1){
			printf("Enter the value of the node: ");
			scanf("%d", &data);
			userinlist(data);
		}
		else if(n == 2){
			show();
		}
		else if(n == 3){
			printf("Enter the value of the node: ");
			scanf("%d", &data);
			insertathead(data);
		}
	}
}
