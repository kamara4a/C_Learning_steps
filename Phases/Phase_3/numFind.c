#include <stdio.h>

int main (){
    int num[10];
    int max =0, min;

    for(int i=0; i<10; i++){
        printf("Enter a number: ");
        scanf("%d", &num[i]);

        if(num[i] > max)
            max = num[i];
        
        if(i==0)

            min = num[i];
        else {
            if(num[i]<min)
                min = num[i];
        }
    }

    printf("The max is: %d", max);
    printf("The min is: %d", min);


}