#include <stdio.h>

int main(){
    char word[] = "Hello World";
    int i =0;

    printf("The individual characters of the phrase are: \n");
    while (word[i] != '\0'){
        printf("%c \n", word[i]);
        i++;
    }

    return 0;
}