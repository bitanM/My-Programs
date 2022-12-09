#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int stack[100];
int max=100;
int top = -1;
void push(int data){
	if(top<max-1){
		stack[++top] = data;
	}
	else{
		printf("Stack Overflow");
	}
}
int pop(){
	if(top==-1){
		printf("Stack Underflow");
		return 0;
	}
	else{
		return stack[top--];
	}
}
int empty(){
	return top == -1;
}
int precedence(char ch){
	switch(ch){
		case '+' :
		case '-' :
			return 1;
		case '*' :
		case '/' :
			return 2;
		case '^' :
			return 3;
		case '(' :
		case ')' :
			return 4;
		default :
			return -1;
	}
}
void postfix(char ch[]){
		int size = strlen(ch);
		char sym;
		char postfix[600];
		int pi = 0;
		for(int i=0; i<size; i++){
			sym = ch[i];
				printf("sym = %c\n", sym);
				if(precedence(sym) == -1){
					postfix[pi++]=sym;
				}
				else{
					if(top == -1){
						push(sym);
					}
					else{
						while(!empty()){
								if(precedence(sym)>precedence(stack[top])){
									postfix[pi++]=pop();	
								}
								else if(precedence(sym)==precedence(stack[top])){
									if(sym == '^' || sym == '('){
										break;
									}
									else{
										postfix[pi++]=pop();	
									}
								}
								else{
									
									break;
								}
						}
						push(sym);
					}
					
			
				}
		}
		
		while(!empty()){
			postfix[pi++] = pop();
		}
		
		printf("%s ", postfix);
}
int main(){
		char exp[400];

	printf("Put the expression: \n");
	scanf("%s", exp);
	printf("expr entered = %s\n",exp);
	postfix(exp);
}
