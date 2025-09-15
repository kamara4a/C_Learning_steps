#include <stdio.h>

int main(){
    int num = 199;
    int *ptr = &num;

    printf("The value at the location in the pointer: %d \n", *ptr);

    ptr = NULL;

    if(ptr == NULL)
        printf("The pointer is set to null");
    else
        printf("Failed to set");

    return 0;
}