#include <stdio.h>
#include <math.h>

int main(){
    int base, power;

    printf("Enter the base value: \n");
    scanf("%d", &base);
    printf("Enter the power: \n");
    scanf("%d", &power);

    int result = pow(base,power);

    printf("%d^%d is: %d ", base, power, result);

    return 0;
}