#include <stdio.h>
#include <stdlib.h>

void shift(int k, int arr[],size_t size);

int main(int argc, char *argv[]){
    const int k = 3;

    int arr[] = {1,23,4,546,876,234};
    size_t size = sizeof(arr) / sizeof(int);
    
    for (size_t i = 0; i < size; i++)
        printf("%d\t",arr[i]);

    printf("\n");
    
    shift(k,arr,size);

    for (size_t i = 0; i < size; i++)
        printf("%d\t",arr[i]);

    printf("\n");

    return 1;
}

void shift(int k, int arr[],size_t size){
    
    int temp[k];
    int target;
    for (int i = size - 1,x = 0; i >= 0; i--,x++)
    {
        target = i - k;
        if (i >= size - k)
            temp[x] = arr[i];
        if (target < 0)
            arr[i] = temp[abs(target + 1)];
        else
            arr[i] = arr[target];
    }
    
}