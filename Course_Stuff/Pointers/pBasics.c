#include <stdio.h>

int main(){
    int num = 10;
    int *ptr;

    ptr = &num;

    printf("%d \n", num);  //print value in variable
    printf("%d \n", *ptr);     //print value at location in ptr
    printf("%p \n", *ptr);  //print address of variable

    return 0;
}
