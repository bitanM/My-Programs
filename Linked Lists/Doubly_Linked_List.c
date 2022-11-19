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
void insert_at_end(int data){
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
void insert_at_head(int data){
	node* temp = newnode(data);
	temp->next = head;
	head->prev = temp;
	temp->prev = NULL;
	head = temp;
}
void insert_at_random(int data, int pos){
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
void remove_from_end(){
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->prev->next = NULL;
	free(temp);
}
void remove_from_head(){
	node* temp = head;
	temp->next->prev = NULL;
	head = temp->next;
	free(temp);
}
void remove_from_random(int pos){
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
void show(){
	node* temp;
	temp = head;
	while(temp != NULL){
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
void delete_full_list(){
	node* temp = head;
	while(head!=NULL){
		head = NULL;
		free(head);
		head = temp->next;
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
	if(temp->prev != NULL){
		head = temp->prev;
	}
}
int main(){
	printf("Making a Doubly linked list\n");
	while(true){
		printf("\nPress '1' to add a node & Press '4' to remove\n");
		printf("Press '2' to add node at head & Press '5' to remove from head\n");
		printf("Press '3' to add node at any random place & Press '6' to remove from any place\n");
		printf("Enter '7' to see the full List & '8' to delete the full list & '9' reverse the whole list.\n");
		int n;
		int data;
		int pos;
		scanf("%d", &n);
		if(n==1){
		printf("\nEnter the value: ");
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
			remove_from_end();
		}
		else if(n==5){
			remove_from_head();
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
		else if(n==9){
			reverse();
		}
		else{
			break;
		}
	}
}
