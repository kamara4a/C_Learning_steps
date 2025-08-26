#include <stdio.h>

int main(){
    int evenCount=0, oddCount=0, num;
    evenCount = 0;
    oddCount = 0;

    int digit;

    printf("enter a number: \n");
    scanf("%d",&num);

    while (num != 0){
        digit = num%10;

        if(digit%2 == 0){
            evenCount = evenCount + 1;
        }
        else {
            oddCount = oddCount + 1;
        }

        num = num/10;
    }

    printf("Even numbers: %d \n", evenCount);
    printf("Odd numbers: %d \n", oddCount);

    return 0;
}