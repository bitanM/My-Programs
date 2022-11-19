//Simple_linked_list
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
}
void insert_at_beginning(int data){
	node* temp = newnode(data);
	temp->link = head;
	head = temp;
}
void insert_at_random(int data, int pos){
	node* n = newnode(data);
	node* temp = head;
	int count = 1;
	while(temp->link != NULL && count<pos-1){
		temp = temp->link;
		count++;
	}
	n->link = temp->link;
	temp->link = n;
}
void remove_from_end(){
	node* temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	free(temp);
}
void remove_from_beginning(){
	node* temp = head;
	head = temp->link;
	free(temp);
}
void remove_from_random(int pos){
	node* temp = head;
	int count = 1;
	while(temp->link != NULL && count<pos-1){
		temp = temp->link;
		count++;
	}
	temp->link = temp->link->link;
}
void delete_full_list(){
	node* temp = head;
	while(temp->link!=NULL){
		free(head);
		head = temp->link;
		temp = temp->link;
	}
}
void show(){
	node* temp;
	temp = head;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->link;
	}
}
int main(){
	printf("Making a Doubly linked list\n");
	while(true){
		printf("\nPress 1 to add a node & Press 4 to remove\n");
		printf("Press 2 to add node at head & Press 5 to remove from head\n");
		printf("Press 3 to add node at any random place & Press 6 to remove from any place\n");
		printf("Enter 7 to see the full List & 8 to delete the full list.\n");
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
			insert_at_beginning(data);
		}
		else if(n==3){
			printf("Enter the value: \n");
			scanf("%d", &data);
			printf("Enter the position: \n");
			scanf("%d", &pos);
			insert_at_random(data, pos);
		}
		else if(n==4){
			remove_from_end();
		}
		else if(n==5){
			remove_from_beginning();
		}
		else if(n==6){
			printf("Enter the position: \n");
			scanf("%d", &pos);
			remove_from_random(pos);
		}
		else if (n==7)
		{
			show();
		}
		else if(n==8){
			delete_full_list();
		}
		else{
			break;
		}
	}
}

