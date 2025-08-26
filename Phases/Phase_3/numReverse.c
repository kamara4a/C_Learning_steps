#include <stdio.h>

int main() {
    int num[8];
    int reverse[8];

    for(int i=0; i<8; i++){
        printf("Enter a number: ");
        scanf("%d", &num[i]);

        if(i==7){
            for(int j=0; j<8;j++){
                printf("The numbers you entered are: \n");
                printf("%d \n", num[j]);
            }
        }
    }

    for(int i=0; i<8; i++){
        reverse[i] = num[7-i];

        if(i==7){
            printf("The numbers in reverse are: \n");
            for(int j=0; j<8;j++){
                printf("%d, ", reverse[j]);
        }
    }
    }
}