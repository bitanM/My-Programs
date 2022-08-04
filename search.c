#include<stdio.h>
#include<stdlib.h>

// Linear Search - Array

void lineararr(){
	int ele = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &ele);
	int* arr = (int*)malloc(ele*sizeof(int));
	int check=0;
	printf("Enter %d elements: ", ele);
	for(int i=0; i<ele; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter a number to check: ");
	int num;
	scanf("%d",&num);
	int i=0;
	for(i=0; i<5; i++){
		if(arr[i]==num){
			check = 1;
		}
	}
	if(check==1)
		printf("Found\n");
	else
		printf("Not found\n");
}

// Binary Search - Array

void binaryarr(){
	int ele = 0;
	printf("Enter the number of elements: ");
	scanf("%d", &ele);
	int* arr = (int*)malloc(ele*sizeof(int));
	printf("Enter %d elements: ", ele);
	for(int i=0; i<ele; i++){
		scanf("%d", &arr[i]);
	}
	printf("Enter a number to check: ");
	int num;
	scanf("%d", &num);
	int low = 0;
	int high = ele-1;
	int mid=0;
	int count = 0;
	while(low<=high){
		mid = (high+low)/2;
		if(num == arr[mid]){
			count = 1;
			printf("Found\n");
			break;
		}
		else if(num<arr[mid]){
			high = mid-1;
		}
		else if(num>arr[mid]){
			low = mid+1;
		}
	}
	if(count == 0)
		printf("Not Found\n");
}

// Linear Search - Linked List

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

// Binary Search - Linked List

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
void binarylist(){
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
			printf("Found\n");
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
		printf("Not Found\n");
	}
}


int main(){
	printf("Choose your operation: \n");
	printf("Press 1 for Linear Search using Array\nPress 2 for Binary Search using Array\n");
	printf("Press 3 for Linear Search using Linked List\nPrint 4 for Binary Search using Linked List\n");
	printf("Note:- Please enter sorted numbers for Linear search\n");
	
	int op;
	scanf("%d", &op);
	
	if(op==1)
		lineararr();
	else if(op==2)
		binaryarr();
	else if(op==3)
		linearlist();
	else if(op==4)
		binarylist();
}
