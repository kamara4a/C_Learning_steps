#include <stdio.h>

void add(int a){
    a = a+a;
    printf("The value of a is: %d \n", a);
}

int main(){
    int a = 10;
    printf("The value of a is: %d \n", a);
    add(a);
    printf("The value of a is: %d \n", a);

    return 0;
}