#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int q[400];
int max=4;
int front=-1;
int rear=-1;
void enqueue(int n){
	if(rear < max-1){
		q[++rear] = n;
		if(front == -1){
			front = rear;
		}
	}
	if(rear == max-1){
		printf("The Queue is full\n");
	}
}
void dequeque(){
	if(front <= rear){
		++front;
	}
	if(front == rear && rear == -1){
		printf("The Queue is Empty");
	}
}
void show(){
	for(int i=front; i<=rear; i++){
		printf(" %d ", q[i]);
	}
}
int main(){
	printf("Making a Q\n");
	int choice;
	int num;
	while(true){
		printf("To enqueue press 1\n");
		printf("To dequeue press 2\n");
		printf("To see the Q press 3\n");
		scanf("%d", &choice);
		if(choice == 1){
			printf("Enter the number: \n");
			scanf("%d", &num);
			enqueue(num);
			show();
		}
		else if(choice == 2){
			dequeque();
		}
		else if(choice == 3){
			show();
		}
		else{
			break;
		}
	}
}
		
