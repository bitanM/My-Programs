# include<stdio.h>
# include<stdlib.h>
int main(){
	int el;
	printf("Enter the number of elements: ");
	scanf("%d", &el);
	
	int* arr = (int*)malloc(el*sizeof(int));
	for(int i=0; i<el; i++){
		scanf("%d", &arr[i]);
	}
	for(int i=0; i<el; i++){
		int min = i;
		for(int j=i; j<el; j++){
			if(arr[j]<arr[min])
				min = j;
		}
		int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;
	}
	for(int i=0; i<el; i++){
		printf("%d ", arr[i]);
	}
}
