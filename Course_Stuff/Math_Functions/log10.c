#include <stdio.h>
#include <math.h>

int main(){
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    float result = log10(num);

    printf("log(%d) is: %f",num, result);

    return 0;
}