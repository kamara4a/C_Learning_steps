#include <stdio.h>

int main(){
    int num[5] = {1,2,3,4,5};
    int *ptr = num;

    //This loop prints the elements in array
    for(int i = 0; i<5; i++){
        printf("%d \n", *(ptr+i));      
    }

    //This loop prints addresses of each element
    for(int i = 0; i<5; i++){
        printf("%p \n", (ptr+i));
    }
    return 0;
}