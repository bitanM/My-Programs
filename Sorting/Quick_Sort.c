#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int* arr, int l, int h){
    int pivot = arr[h];
    int i = l-1;
    for(int j=l; j<=h; j++){
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    return i;
}

void QuickSort(int* arr, int l, int h){
    if(l<h){
        int i = partition(arr, l, h);
        QuickSort(arr, l, i-1);
        QuickSort(arr, i+1, h);
    }
}

int main(){
    printf("Enter the size of array: ");
    int n;
    scanf("%d", &n);
    int* arr = (int*)malloc(sizeof(int)*n);
    printf("Enter the numbers: ");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    QuickSort(arr, 0, n-1);
    printf("Sorted array: \n");
    for(int i=0; i<n; i++){
        printf(" %d ", arr[i]);
    }
}
