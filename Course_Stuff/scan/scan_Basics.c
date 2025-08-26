#include <stdio.h>

int main() {
    int num; //declare variable
    printf("Enter a number: ");  //prompt
    scanf("%d", &num);  //waits for user input

    //& is used to give the memory address of the variable

    printf("The number you entered is: %d \n" , num);

    return 0;
}