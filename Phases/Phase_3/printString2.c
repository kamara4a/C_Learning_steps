#include <stdio.h>

void print(char word[]){
    int i = 0;
    while(word[i] != '\0'){
        printf("%c \n", word[i]);
        i++;
    }
}

int main(){
    char word[] = "Roselyn";
    printf("The letters of the word: \n");
    print(word);

    return 0;
}