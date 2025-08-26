#include <stdio.h>

int factorial(int num){
    if(num ==0 || num == 1)
        return 1;
    else
        return num * factorial (num-1);
}

int main(){
    int num;
    printf("Enter a num: ");
    scanf("%d", &num);

    int factorialValue = factorial(num);
    printf("\n The factorial of %d is %d \n", num, factorialValue );
    return 0;
}