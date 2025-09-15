#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    arr = (int*)calloc(5, sizeof(int));

    if(arr == NULL){
        printf("Failed to allocate");
        exit(0);
    }

    for(int i = 0; i<5; i++){
        printf("%d, ", arr[i]);
    }

    printf("\n");

    for(int i =0; i<5; i++){
        arr[i] = 3 * (i+1);
        printf("%d, ", arr[i]);
    }

    free(arr);
    return 0;
}