#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int q[400];
int max = 4;
int front = -1;
int rear = -1;

void insert_at_front(int data){
	if((rear+1)%max == front)
		printf("The Queue is Full");
	
	if(front == rear && rear == -1){
		front = 0;
		rear = 0;
		arr[front] = data;
	}
	
	if(front == 0){
		front = max-1;
		arr[front] = data;
	}
	else{
		front = front-1;
		arr[front] = data;
	}
}

void insert_at_rear(int data){
	if((rear+1)%max == front)
		printf("The Queue is Full");
	
	if(front == rear && rear == -1){
		front = 0;
		rear = 0;
		arr[rear] = data;
	}
	
	if(rear == max-1){
		rear = 0;
		arr[rear] = data;
	}
	else{
		rear++;
		arr[rear] = data;
	}
}

void delete_from_front(){
	if(front == rear && rear == -1)
		printf("The Queue is Empty");
	
	if(front == rear){
		rear = -1;
		front = -1;
	}
	else{
		front++;
	}
}

void delete_from_rear(){
	if(front == rear && rear == -1)
		printf("The Queue is Empty");
	
	if(front == rear){
		rear = -1;
		front = -1;
	}
	else{
		rear = rear-1;
	}
}
