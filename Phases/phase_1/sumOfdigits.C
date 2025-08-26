#include <stdio.h>

int main(){
    int sum, digit, num;
    sum = 0;

    printf("Enter a number greater than 11: \n");
    scanf("%d", &num);

    while(num != 0){
        digit = num%10;
        sum = sum+digit;
        num = num/10;
    }

    printf("The sum of digits is: %d \n", sum);

    return 0;
}