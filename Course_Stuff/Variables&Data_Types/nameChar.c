#include <stdio.h>

int main(){

    char name[20] = "samuel";

    printf("My name: %s\n", name);

    //access each individual letter in the array
    printf("Letters: %c\n", name[0]);
    
    return 0;
}