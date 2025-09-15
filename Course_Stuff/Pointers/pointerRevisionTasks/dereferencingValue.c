#include <stdio.h>

void change(int *a){
    *a = 20;
}

int main(){
    int a = 10;
    printf("The value for a is: %d \n", a);
    change(&a);
    printf("The value for a is: %d \n", a);

    return 0;
}