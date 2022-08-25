#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int *stack;
int top=-1;
int max;
void push(int n){
   if(top<max-1){
	stack[++top]=n;
   }
   else{
	printf("Stack Overflow\n");
   }
}
int pop(){
    if(top==-1){
        printf("Stack Underflow\n");
        return 0;
    }
    else{
        return stack[top--];
    }
}
void peek(){
    if(top>-1){
	printf("%d\n", stack[top]);
        return;
    }
    else{
        printf("Empty Stack\n");
        return;
    }
}
int main(){
	printf("Enter the size of the stack: ");
	int n;
	int choice;
	int num;
	scanf("%d", &n);
	max = n;
	stack = (int*)malloc(sizeof(int)*max);
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
