#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	struct node* link;
}node;
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->link = NULL;
	return n;
}
node* head;
void userinlist(int data){
	node* n = newnode(data);
	if(head==NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->link != NULL){
		temp = temp->link;
	}
	temp->link = n;
}

void linearlist(){
	int n=0;
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: ");
	for(int i=0; i<n; i++){
		int d;
		scanf("%d", &d);
		userinlist(d);
	}
	printf("Enter a number to check: ");
	int num=0;
	scanf("%d", &num);
	node* temp = head;
	int check=0;
	while(temp->link != NULL){
		if(temp->data == num){
			check=1;
			break;
		}
		temp = temp->link;
	}
	if(check==1)
		printf("Found\n");
	else
		printf("Not Found\n");
		
}
