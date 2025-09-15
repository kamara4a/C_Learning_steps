#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    arr = (int*)malloc(3*sizeof(int));

    if(arr == NULL){
        printf("Failed to Allocate");
        exit(0);
    }

    for(int i=0;i<3;i++){
        arr[i] = i + 1;
        printf("%d, ", arr[i]);
    }

    printf("\n");

    arr = (int*)realloc(arr, 5*sizeof(int));   //(type*)realloc(pointer, size);

    for(int i=0;i<5;i++){
        arr[i] = 3*(i+5);
        printf("%d, ", arr[i]);
    }

    free(arr);
    return 0;
}