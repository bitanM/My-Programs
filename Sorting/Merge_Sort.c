#include <stdio.h>
#include <stdlib.h>
void merge(int* arr, int l, int h, int mid){
	int sz1 = mid-l+1;
	int sz2 = h-mid;
	int* arr1 = (int*)malloc(sizeof(int)*sz1);
	int* arr2 = (int*)malloc(sizeof(int)*sz2);
	for(int i=0; i<sz1; i++){
		arr1[i] = arr[i+l];
	}
	for(int j=0; j<sz2; j++){
		arr2[j] = arr[mid+j+1];
	}
	int ptr1=0;
	int ptr2=0;
	int cur=l;
	while(ptr1<sz1 || ptr2<sz2){
		if(ptr1>=sz1){
			arr[cur] = arr2[ptr2];
			ptr2++;
		}
		else if(ptr2>=sz2){
			arr[cur] = arr1[ptr1];
			ptr1++;
		}
		else{
			if(arr1[ptr1]<arr2[ptr2]){
				arr[cur] = arr1[ptr1];
				ptr1++;
			}
			else{
				arr[cur] = arr2[ptr2];
				ptr2++;
			}
		}
			cur++;
	}
}

void mergesort(int* arr, int l, int h){
	if(l<h){
		int mid;
		mid = (l+h)/2;
		mergesort(arr, l, mid);
		mergesort(arr, mid+1, h);
		merge(arr, l, h, mid);
	}
}

int main(){
	printf("Enter the size: ");
	int num;
	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int)*num);
	for(int i=0; i<num; i++){
		scanf("%d", &arr[i]);
	}
	mergesort(arr, 0, 4);
	printf("Array sorted using Merge Sort: ");
	for(int i=0; i<num; i++){
		printf(" %d ", arr[i]);
	}
	printf("\n");
}
