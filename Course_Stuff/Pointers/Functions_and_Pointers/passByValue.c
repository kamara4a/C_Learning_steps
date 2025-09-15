#include <stdio.h>

void change(int a){
    a = 50;
    printf("a = %d \n", a);
}

int main(){
    int a =10;
    change(a);
    printf("a = %d \n", a);

    return 0;
}