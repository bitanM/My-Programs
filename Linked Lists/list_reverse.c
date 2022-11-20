#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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
void insert_at_end(int data){
	node* n = newnode(data);
	if(head == NULL){
		head = n;
		return ;
	}
	node* temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = n;
   // last = n;
}
void show(){
	node* temp;
	temp = head;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->link;
	}
}
void reverse(){
	node* next;
	node* prev = NULL;
	node* current = head;
	while(current != NULL){
		next = current->link;
		current->link = prev;
		prev = current;	
		current = next;
	}
	head = prev;
	return;
}
int main(){
	printf("Reversing a Single linked list.");
	while(true){
		printf("\nTo add node press '1'\n");
		printf("To Reverse the list press '2'\n");
		printf("To see the list press '3'\n");
		int n;
		int data;
		scanf("%d", &n);
		if(n==1){
			printf("Enter the data: ");
			scanf("%d", &data);
			insert_at_end(data);
		}
		else if(n==2){
			reverse();
		}
		else if(n==3){
			show();
		}
		else
			break;
	}
}