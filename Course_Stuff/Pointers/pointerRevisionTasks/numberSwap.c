#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 10;
    int b = 20;

    printf("Before swap: \n");
    printf("a = %d and b = %d \n", a, b);
    swap(&a,&b);

    printf("After swap: \n");
    printf("a = %d and b = %d \n", a, b);

    return 0;
}