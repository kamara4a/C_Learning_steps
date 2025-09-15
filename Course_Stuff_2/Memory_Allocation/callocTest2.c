#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size; 

    printf("Enter size: \n");
    scanf("%d", &size);

    arr = (int*)calloc(size, sizeof(int));

    if(arr == NULL){
        printf("Failed to allocate");
        exit(0);
    }

    for(int i = 0; i<size; i++){
        printf("%d, ", arr[i]);
    }

    printf("\n");

    for(int i =0; i<size; i++){
        arr[i] = 3 * (i+1);
        printf("%d, ", arr[i]);
    }

    free(arr);
    return 0;
}