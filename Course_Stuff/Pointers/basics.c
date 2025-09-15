#include <stdio.h>
int main(){
    int num = 9;
    printf("data value is: %d \n", num);

    int *pointer = &num;
    printf("Address of variable in memory: %d \n", pointer);
    printf("Indirect referencing of data: %d \n", *pointer);
}