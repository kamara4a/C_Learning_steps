#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    int size;

    printf("Enter size: \n");
    scanf("%d", &size);

    arr = (int*)malloc(size * sizeof(int));

    if(arr == NULL){
        printf("failed to allocate");
        exit(0);
    }

    for(int i = 0; i<size; i++){
        arr[i] = 6*(i+3);
        printf("%d, ", arr[i]);
    }

    free(arr);
    return 0;
}