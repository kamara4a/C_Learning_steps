#include <stdio.h>

int main(){
    int num1[2][2];
    int num2[2][2];
    int result[2][2];

    printf("Array #1: \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            num1[i][j] = (i+1)*(j+2);
            printf("%d ", num1[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("Array #2: \n");
    for(int i = 0; i<2; i++){
        for(int j = 0; j<2; j++){
            num2[i][j] = (i+3)*(j+4);
            printf("%d ", num2[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("The two arrays multiplied: \n");

    for(int i = 0; i<2; i++){
        for(int j=0; j<2; j++){
            result[i][j] = (num1[i][0] * num2[0][j])+(num1[i][1] * num2[1][j]);
            printf("%d ", result[i][j]);
        }
        printf("\n ");
    }

    return 0;
}