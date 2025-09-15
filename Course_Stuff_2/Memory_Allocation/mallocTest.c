#include <stdio.h>
#include <stdlib.h>

int main(){
    int *arr;
    arr = (int*)malloc(5*sizeof(int));

    if(arr == NULL){
        printf("Failed to allocate memory!");
        exit(0); //safe exit
    }

    for(int i = 0; i<5;i++){
        arr[i] = 5*(i+2);
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}