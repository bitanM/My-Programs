//Doubly linked list
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
void userinlist(int data){
	node* n = newnode(data);
	if(head == NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
}
void show(){
	node* temp;
	temp = head;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
void reverse(){
	node* current = head;
	node* temp = NULL;
	while(current != NULL){
		temp = current->prev;
		current->prev = current->next;
		current->next = temp;
		current = current->prev;
	}
	if(temp != NULL){
		head = temp->prev;
	}
}
void insertathead(int data){
	node* temp = newnode(data);
	temp->next = head;
	head->prev = temp;
	temp->prev = NULL;
	head = temp;
}
void insertatrandom(int data, int pos){
	node* n = newnode(data);
	node* temp = head;
	int count = 1;
	while(temp->next!=NULL && count<pos-1){
		temp = temp->next;
		count++;
	}
	n->next = temp->next;
	temp->next = n;
	n->prev = temp;
}
void removefromend(){
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->prev->next = NULL;
	free(temp);
}
void removefromhead(){
	node* temp = head;
	temp->next->prev = NULL;
	head = temp->next;
	free(temp);
}
void removefromrandom(int pos){
	node* temp = head;
	int count = 1;
	while(temp->next!=NULL && count<pos){
		temp = temp->next;
		count++;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}
int main(){
	printf("Making a Doubly linked list\n");
	while(true){
		printf("\nIf you want to add a node press 1");
		printf("\nIf you want to see the list press 2\n");
		printf("If you want to see the reverse of the list press 3\n");
		printf("If you want to insert at the beginning press 4\n");
		printf("If you want to insert at any random position press 5\n");
		printf("If you want to remove from the end press 6\n");
		printf("If you want to remove from the head press 7\n");
		printf("If you want to remove from random position press 8\n");
		printf("Press any other digit to exit\n");
		int n;
		int data;
		int pos;
		scanf("%d", &n);
		if(n==1){
		printf("\nEnter the value of the node: ");
		scanf("%d", &data);
		userinlist(data);
		}
		else if(n==2){
			show();
		}
		else if(n==3){
			reverse();
			show();
		}
		else if(n==4){
			printf("Enter the value: \n");
			scanf("%d", &data);
			insertathead(data);
		}
		else if(n==5){
			printf("Enter the value: \n");
			scanf("%d", &data);
			printf("Enter the position: \n");
			scanf("%d", &pos);
			insertatrandom(data, pos);
		}
		else if(n==6){
			removefromend();
		}
		else if(n==7){
			removefromhead();
		}
		else if(n==8){
			printf("Enter the position: \n");
			scanf("%d", &pos);
			removefromrandom(pos);
		}
		else{
			break;
		}
	}
}
