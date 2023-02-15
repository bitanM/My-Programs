#include<stdio.h>
#include<stdlib.h>

int* count_sort(int* arr, int k, int n){
    int* c = (int*)malloc((k+1)*sizeof(int));
    int* b = (int*)malloc((n+1)*sizeof(int));
    for(int i=0; i<=k; i++){
        c[i]=0;
    }
    for(int i=0; i<n; i++){
        c[arr[i]]=c[arr[i]]+1;
    }
    for(int i=1; i<=k; i++){
        c[i]=c[i]+c[i-1];
    }
    for(int i=n-1; i>=0; i--){
        b[c[arr[i]]]=arr[i];
        c[arr[i]]=c[arr[i]]-1;
    }
    return b;
}

int main(){
    printf("Enter the size: ");
    int s;
    scanf("%d", &s);
    int* arr = (int*)malloc(s*sizeof(int));
    int k=0;
    printf("Enter the elements: ");
    for(int i=0; i<s; i++){
        scanf("%d", &arr[i]);
        if(k<arr[i])
            k=arr[i];
    }
   arr = count_sort(arr, k, s);
   for(int i=1; i<=s; i++){
    printf(" %d ", arr[i]);
   }
}