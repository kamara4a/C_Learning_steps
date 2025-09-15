#include <stdio.h>

int main(){
    int n = 9;
    int *ptr = &n;

    printf("The value at n: %d \n", n);
    printf("The value stored in the pointer: %p \n", ptr);
    printf("The value stored in the address: %d \n", *ptr);

    return 0;
}