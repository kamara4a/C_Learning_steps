#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

void check(int len, char word[], bool isPalindrome){
    for(int i = 0, j = len-1; 1<=j; i++, j--){
        if(word[i] != word[j]){
            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome)
        printf("the word is a palindrome \n");
    else
        printf("The word is not a palindrome \n");
}

int main(){
    int len;
    char word[100];
    bool isPalindrome;

    printf("Enter a word: ");
    scanf("%s", &word);

    len = strlen(word);

    check(len, word, isPalindrome);
}