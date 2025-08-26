#include <stdio.h>

int main(){
    int num, highest = 0, digit;

    printf("Enter a number: \n");
    scanf("%d", &num);

    while(num!=0){
        digit = num%10;

        if(digit>highest)
            highest = digit;
        
        num = num/10;
    }

    printf("the highest digit is: %d" , highest);

    return 0;
}