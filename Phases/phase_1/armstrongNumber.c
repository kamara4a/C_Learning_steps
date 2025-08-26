#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, sum;
    sum = 0;
    int original;
    int count = 0;

    printf("Enter a number: \n");
    scanf("%d", &num);

    original = num;

    while(num != 0){
        digit = num % 10;
        num = num/10;

        count = count +1;
    }
    
    num = original;
    
    while(num != 0) {
        digit = num % 10;
        sum = sum + pow(digit,count);
        num = num/10;
    }

    if(sum == original)
        printf("The number %d is an Amstrong number \n" , original);
    else
        printf("The number %d isnt an amstrong number \n", original);

    return 0;
}