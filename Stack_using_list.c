#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// creating a datatype of node, which wiil build the list.
typedef struct node{
	int data;
	struct node* prev;
} node;
// function that will make new nodes when called.
node* newnode(int data){
	node* n = (node*)malloc(sizeof(node));
	n->data = data;
	n->prev = NULL;
	return n;
}
node* head = NULL;
void push(int data){
  node* n = newnode(data);
  if (head == NULL){
    head = n;
    return;
  }
  n->prev = head;
  head = n;
}
void pop(){
  if (head == NULL) return;
  node *tmp = head;
  head = (head)->prev;
  free(tmp);
}
void peek(){
  if (head == NULL) printf("Empty");
  printf("%d\n", head->data);
}
int main(){
	int choice;
	int num;
	while(true){
		printf("If you want to push press 1\n");
		printf("If you want to pop press 2\n");
		printf("If you wnat to see the top element press 3\n");
		scanf("%d", &choice);
		if(choice == 1){
			printf("Enter the element: ");
			scanf("%d", &num);
			push(num);
		}
		else if(choice == 2){
			pop();
		}
		else if(choice == 3){
			peek();
		}
		else{
			break;
		}
	}
}