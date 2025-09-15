#include <stdio.h>

int main(){
    int a = 20;
    int *ptr = &a;

    printf("The value in a: %d \n", a);
    printf("The address of a: %p \n", &a);
    printf("The value stored in ptr: %p \n", ptr);
    printf("The value stored at *ptr: %d \n", *ptr);

    return 0;
}