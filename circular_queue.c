#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int q[400];
int max=4;
int front=-1;
int rear=-1;
void enqueue(int n){
	if((rear+1)%max == front){
		printf("The queue is full");
	}
	else{
		rear = (rear+1)%max;
		q[rear] = n;
		if(front == -1){
			front = rear;
		}
	}
}
void dequeque(){
	if(rear == -1){
		printf("The Queue is Empty");
	}
	else{
		front = (front+1)%max;
	}
}
void show(){
	int i=front;
	do{
		printf("%d ",i);
		i = (i+1)%max;
	}
	while(i!=(rear+1)%max);
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
		
