#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int *stack;
int top=-1;
int max=1000;
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
int main(){
    int n=4;
    int arr[n];
    stack = (int*)malloc(sizeof(int)*max);
    for(int i=0; i<n; i++){
        arr[i] = i;
    }
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
    for(int i=0; i<n; i++){
        push(arr[i]);
    }
    for(int i=0; i<n; i++){
        arr[i]=pop();
    }
    printf("\n");
    for(int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }

}
