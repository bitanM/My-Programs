//Circular_Doubly_linked_list
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
int numberofnodes(){
	node* temp = head;
	int num=0;
	while(temp->next!=head){
		num ++;
		temp = temp->next;
		}
	return num;
}
void insert_at_end(int data){
	node* n = newnode(data);
	if(head == NULL){
		head = n;
		n->next = head;
		n->prev = head;
		return;
	}
	node* temp = head;
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
	n->next = head;
}
/*void reverse(){
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
}*/
void insert_at_head(int data){
	node* temp = newnode(data);
	temp->prev = head->prev;
	head->prev->next = temp;
	head->prev = temp;
	temp->next = head;
	head = temp;
}
void insert_at_random(int data, int pos){
	node* temp = head;
	node* n = newnode(data);
	int count = 1;
	if(pos==1){
		insert_at_head(data);
	}
	else if(pos == numberofnodes()){
		insert_at_end(data);
	}
	else{
		while(count<pos-1){
			temp = temp->next;
			count++;
		}
		temp->next->prev = n;
		n->next = temp->next;
		temp->next = n;
		n->prev = temp;
		}
}
void remove_from_end(){
	node* temp = head;
	while(temp->next!=head){
		temp = temp->next;
	}
	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);
}
void remove_from_head(){
	head->prev->next = head->next;
	head->next->prev = head->prev;
	free(head);
}
void remove_from_random(int pos){
	node* temp = head;
	int count = 1;
	if(pos==1){
		remove_from_head();
	}
	else if(pos == numberofnodes()){
		remove_from_end();
	}
	else{
		while(count<pos-1){
			temp = temp->next;
			count++;
		}
		node *RIPnode = temp->next;
		temp->next = temp->next->next;
		free(RIPnode);
	}
}
void show(){
	node* temp;
	temp = head;
	while(temp->next != head){
		printf("%d ", temp->data);
		temp = temp->next;
	}
	printf("%d ", temp->data);
}
int main(){
	printf("Making a Doubly linked list\n");
	while(true){
		printf("\nPress '1' to add a node & Press '4' to remove\n");
		printf("Press '2' to add node at head & Press '5' to remove from head\n");
		printf("Press '3' to add node at any random place & Press '6' to remove from any place\n");
		printf("Enter '7' to see the full List.\n");
		int n;
		int data;
		int pos;
		scanf("%d", &n);
		
		if(n==1){
		printf("\nEnter the value of the node: ");
		scanf("%d", &data);
		insert_at_end(data);
		}
		else if(n==2){
			printf("Enter the value: \n");
			scanf("%d", &data);
			insert_at_head(data);
		}
		else if(n==3){
			printf("Enter the value: \n");
			scanf("%d", &data);
			printf("Enter the position: \n");
			scanf("%d", &pos);
			insert_at_random(data, pos);
		}
		else if(n==4){
			remove_from_end(data);
		}
		else if(n==5){
			remove_from_head();
		}
		else if(n==6){
			printf("Enter the position: \n");
			scanf("%d", &pos);
			remove_from_random(pos);
		}
		else if(n==7){
			show();
		}
		else{
			break;
		}
	}
}
