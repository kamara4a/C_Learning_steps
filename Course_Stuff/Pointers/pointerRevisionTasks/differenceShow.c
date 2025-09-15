#include <stdio.h>

int main(){
    int num = 9;
    int *ptr = &num;

    printf("This show the value stored in ptr: %p \n", ptr);
    printf("This shows the value stored at the address in ptr: %d", *ptr);

    return 0;
}