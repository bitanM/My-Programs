#include<stdio.h>
#include<stdlib.h>
// Linear Search - Array
/*
int main(){
	int* arr = (int*)malloc(5*sizeof(int));
	int check=0;
	printf("Enter 5 elements: ");
	for(int i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter a number to check: ");
	int num;
	scanf("%d",&num);
	for(int i=0; i<5; i++){
		if(arr[i]==num){
			check = 1;
		}
	}
	if(check==1)
		printf("Found");
	else
		printf("Not found");
}
*/
// Binary Search - Array
/*
int main(){
	int ele = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &ele);
	int* arr = (int*)malloc(ele*sizeof(int));
	printf("Enter 5 elements: ");
	for(int i=0; i<ele; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter a number to check: ");
	int num;
	scanf("%d", &num);
	int low = 0;
	int high = ele-1;
	int mid=0;
	while(low<=high){
		mid = (high+low)/2;
		if(num == arr[mid]){
			printf("Found at %d", mid+1);
			break;
		}
		else if(num<arr[mid]){
			high = mid-1;
		}
		else if(num>arr[mid]){
			low = mid+1;
		}
		else{
			printf("Not found");
		}
	}
}
*/
// Linear Search - Linked List
/*
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
int main(){
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
		printf("Found");
	else
		printf("Not Found");
		
}
*/
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
int find(int index){
	int ind = 0;
	node* temp = head;
	while(temp != NULL){
		if(ind==index){
			return temp->data;
		}
		else{
			temp = temp->link;
			ind++;
		}
	}
}
int main(){
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
	int low = 0;
	int high = 0;
	node* temp = head;
	while(temp != NULL){
		high ++;
		temp = temp->link;
	}
	high = high-1;
	int mid=0;
	int check = 0;
	while(low<=high){
		mid = (high+low)/2;
		if(num == find(mid)){
			check = 1;
			printf("Found at %d", mid+1);
			break;
		}
		else if(num<find(mid)){
			high = mid-1;
		}
		else if(num>find(mid)){
			low = mid+1;
		}
		
	}
	if(check == 0){
		printf("Not Found");
	}
}
