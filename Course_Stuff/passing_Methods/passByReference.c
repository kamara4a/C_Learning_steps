#include <stdio.h>

void changevalue(int *a){
    *a = 40;
}

int main(){
    int a = 10;
    printf("The value of a is: %d \n", a);
    changevalue(&a);
    printf("The value of a is: %d \n", a);

    return 0;
}