#include<stdio.h>
#include<stdlib.h>

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
