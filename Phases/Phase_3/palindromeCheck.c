#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(){
    int i, j;
    char word[100];
    bool isPalindrome = true;

    printf("Enter word: ");
    scanf("%s", &word);

    int len = strlen(word);
    for(i =0, j = len-1; i<j; i++, j-- ){
        if(word[i] != word[j]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        printf("The word is a palindrom \n");
    else
        printf("The word is not a palindrome \n");

    return 0;
}