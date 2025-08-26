#include <stdio.h>

int main(){
    int num;

    do{
        printf("Enter a number: (0-9)");
        scanf("%d", &num);

        if(num!=0)
            printf("WRONG NUMBER! \n");

    } while(num != 0);

    printf("Well Done! \n");
    return 0;
}