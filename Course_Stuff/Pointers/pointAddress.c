#include <stdio.h>

void main(){
    int num = 9;
    int *point = &num;

    printf("%p \n", point);  //%p prints addresses!!
    printf("%d \n", *point);

    *point = 0;
    printf("%d", num);
}