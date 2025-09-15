#include <stdio.h>

void main(){
    int num = 9;
    int *pointer = &num;

    int u1 = 2 * (num + 3);
    printf("%d \n", u1);
    int u2 = 2 * (*pointer + 3);
    printf("%d \n", u2);

    *pointer = 0;
    u1 = 2 * (num + 3);
    printf("%d \n", u1);
    u2 = 2 * (*pointer + 3);
    printf("%d \n", u2);
}