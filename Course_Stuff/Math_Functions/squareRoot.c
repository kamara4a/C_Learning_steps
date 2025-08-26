#include <stdio.h>
#include <math.h>

int main(){
    int num;
    float result;

    printf("Enter a number: \n");
    scanf("%d", &num);

    result = sqrt(num);

    printf("The square root of  %d is: %f", num, result);

    return 0;
}