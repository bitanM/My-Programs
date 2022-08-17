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
int numberofnodes(){
	node* temp = head;
	int num=1;
	while(temp!=last){
		num ++;
		temp = temp->next;
		}
	return num;
}
void insertatrandom(int data, int pos){
	node* temp = head;
	node* n = newnode(data);
	int count = 1;
	if(pos==1){
		insertathead(data);
	}
	else if(pos == numberofnodes()){
		userinlist(data);
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

void removefromhead(){
	last->next = head->next;
	free(head);
	head = last->next;
}
void removefromlast(){
	node* temp = head;
	while(temp->next != last){
		temp = temp->next;
	}
	temp->next = head;
	free(last);
	last = temp;
}
void deletefromrandom(int pos){
	node* temp = head;
	int count = 1;
	if(pos==1){
		removefromhead();
	}
	else if(pos == numberofnodes()){
		removefromlast();
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
		printf("To delete from head press 4\n");
		printf("To delete from last press 5\n");
		printf("To insert at any random place press 6\n");
		printf("To remove from any random place press 7\n");
		int n;
		int data;
		int pos;
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
		else if(n == 4){
			removefromhead();
		}
		else if(n == 5){
			removefromlast();
		}
		else if(n == 6){
			printf("Enter the position: ");
			scanf("%d", &pos);
			printf("Enter the data: ");
			scanf("%d", &data);
			insertatrandom(data, pos);
		}
		else if(n == 7){
			printf("Enter the position: ");
			scanf("%d", &pos);
			deletefromrandom(pos);
		}
		else{
			break;
		}
	}
}
