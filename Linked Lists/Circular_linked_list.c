// Circular_linked_list
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->next = NULL;
	return n;
}
node* head;
node* last;
void insert_at_end(int data){
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
void insert_at_head(int data){
	node* temp = head;
	node* n = newnode(data);
	while(temp->next != head){
		temp = temp->next;
	}
	temp->next = n;
	n->next = head;
	head = n;
}
int numberofnodes(){
	node* temp = head;
	int num=1;
	while(temp!=last){
		num ++;
		temp = temp->next;
		}
	return num;
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
		n->next = temp->next;
		temp->next = n;
	}
}

void remove_from_head(){
	last->next = head->next;
	free(head);
	head = last->next;
}
void remove_from_end(){
	node* temp = head;
	while(temp->next != last){
		temp = temp->next;
	}
	temp->next = head;
	free(last);
	last = temp;
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
void delete_full_list(){
	node* temp = head->next;
	node* t = head;
	while(temp!=NULL){
		head = NULL;
		free(head);
		head = temp;
		temp = temp->next;
	}
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
	printf("Making a Circular linked list.\n");
	while(true){
		printf("\nPress '1' to add a node & Press '4' to remove\n");
		printf("Press '2' to add node at head & Press '5' to remove from head\n");
		printf("Press '3' to add node at any random place & Press '6' to remove from any place\n");
		printf("Enter '7' to see the full List & '8' to delete the full list.\n");
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
		else{
			break;
		}
	}

}
