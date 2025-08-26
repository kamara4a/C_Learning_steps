#include <stdio.h>

int main(){
    int num[10];
    int sum = 0;

    for(int i=0; i<10; i++){
        printf("Enter a number: ");
        scanf("%d", &num[i]);

        printf("%d + %d = ", sum, num[i]);
        sum = sum +num[i];
        printf(" %d \n", sum);
    }

    printf("The sum of all numbers is: %d", sum);

    return 0;
}