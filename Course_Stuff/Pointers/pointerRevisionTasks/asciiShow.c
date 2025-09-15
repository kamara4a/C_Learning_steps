#include <stdio.h>

int main(){
    char letter = 'R';
    char *ptr = &letter;

    printf("The value in variable: %c \n", *ptr);
    printf("The ASCII value: %d \n", *ptr);

    return 0;
}