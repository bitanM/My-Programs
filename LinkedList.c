#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int number;
	struct node*next;
}
node;
int main(){
	node *list = NULL;	//List of size
	node *n = malloc(sizeof(node));		//Add a number to list
	if(n==NULL)
		return 1;
	n->number=1;
	n->next=NULL;
	list = n;	//Update list to point to new node
	n = malloc(sizeof(node));	//Add a number to list
	if(n == NULL)
	{
		free(list);
		return 1;
	}
	n->number = 2;
	n->next = NULL;
	list->next = n;
	n = malloc(sizeof(node)); 	//Add a number to list
	if(n == NULL)
	{
		free
	
