#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter Array Size: \n");             
    int size;
    scanf("%d", &size);
    int *arr = (int*)malloc(size * sizeof(int));
    printf("Enter Array : \n");
    for(int i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Inputted Array : \n");          
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");


    //int key;
    for(int i=1; i<size; i++)            
    {
        int key = arr[i];
        int j;
        for(j=i-1; j>=0 && key<arr[j]; j--)
        {
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }

    printf("Insertion Sorted Array : \n");
    for(int i=0; i<size; i++)
    {
        printf("%d\t", arr[i]);
    }


    return 0;
}