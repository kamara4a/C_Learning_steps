#include <stdio.h>

int main() {
    int num, numReversed, digit;
    numReversed =0;

    printf("Enter a number greater than 11: \n");
    scanf("%d", &num);

    while(num != 0){
        digit = num%10;
        numReversed = (numReversed * 10) + digit;

        num = num/10;
    }

    printf("The number reversed is: %d", numReversed);

    return 0;
}