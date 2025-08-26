#include <stdio.h>
#include <math.h>

int main(){
    int result, a, b;
    result = 0;

    printf("Enter the first digit (a): \n");
    scanf("%d", &a);
    printf("Enter the second digit (b): \n");
    scanf("%d", &b);

    printf("What function would you like to be carried out? \n");
    printf("a) Addition: a + b \n");
    printf("b) Subtraction: a - b  \n");
    printf("c) Multiplication: a * b  \n");
    printf("d) Division: a / b  \n");
    
    char ans;
    scanf(" %c", &ans);

    switch(ans) {
        case 'a': {
            result = a + b;
            break;
        }

        case 'b': {
            result = a - b;
            break;
        }

        case 'c': {
            result = a * b;
            break;
        }

        case 'd':{
            result = a/b;
            break;
        }

        default:
            break;
    }

    printf("The result is: %d", result);

    return 0;
}