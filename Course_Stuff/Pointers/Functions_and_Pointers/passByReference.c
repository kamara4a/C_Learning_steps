#include <stdio.h>

void change(int *a){
    *a = 50;
    printf("a after change = %d \n",*a );
}

int main(){
    int a = 10;
    printf("a before change = %d \n", a);
    change(&a);         //gets address of a and applies change
    

    return 0;
}