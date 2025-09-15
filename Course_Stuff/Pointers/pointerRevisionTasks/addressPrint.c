#include <stdio.h>

int main(){
    int num = 9;
    int *ptr = &num;

    printf("The address of the variable num is: %p \n", ptr);
    printf("Confirming: %p \n", &num);

    return 0;
}