#include <stdio.h>

int main(){
    int sum = 0;

    for(int num = 1; num<=100; num++){
        sum+=num;
    }

    printf("The sum of numbers is: %d", sum);

    return 0;
}