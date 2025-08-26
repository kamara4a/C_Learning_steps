#include <stdio.h>

int main(){
    int num=0;

    while(num != -1902){
        printf("Enter a number: \n");
        scanf("%d", &num);

        if(num<0)
            break;
    }
}