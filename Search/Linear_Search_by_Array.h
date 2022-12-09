#include<stdio.h>
#include<stdlib.h>

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
