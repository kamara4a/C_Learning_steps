#include <stdio.h>

int main(){
    int num, count = 1, val = 1;

    printf("Enter a number you'd like to calc the factorial of:");
    scanf("%d", &num);

    while(count<= num){
        val = val * count;

        count++;
    }

    printf("Factorial: %d", val);

    return 0;
}