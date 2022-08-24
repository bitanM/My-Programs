#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int *stck;
int top, max;
void push(int n)
{
    if(top<max-1)
    {
        stck[++top]=n;
    }
    else{
        printf("Stack overflow\n");
    }
}
int pop()
{
    if(top==-1)
    {
        printf("Stack underflow\n");
        return 0;
    }
    else{
        return stck[top--];
    }
}
int peek()
{
    if(top>-1)
    {
        return stck[top];
    }
    else{
        printf("No element in the stack\n");
        return 0;
    }
}
int main(){
	printf("Enter the size of the stack: ");
	int n;
	int choice;
	int num;
	scanf("%d", &n);
	max = n;
	while(true){
		printf("If you want to push press 1\n");
		printf("If you want to pop press 2\n");
		printf("If you wnat to see the top element press 3\n");
		scanf("%d", &choice);
		if(choice == 1){
			scanf("%d", &num);
			printf("Enter the element: ");
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

