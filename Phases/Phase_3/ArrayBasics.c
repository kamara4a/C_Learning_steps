#include <stdio.h>

int main(){
    int numArray[5];

    for(int i = 0; i<5; i++){
        printf("Enter a number: ");
        scanf("%d", &numArray[i]);
    }

    printf("The numbers you entered are: \n");
    for(int i=0;i<5;i++) {
        printf("num1: %d \n", numArray[i]);
    }

    return 0;
}