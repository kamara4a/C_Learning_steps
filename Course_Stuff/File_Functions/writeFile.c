#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("data.txt","w");
    char line[100];

    if(fp == NULL){
        printf("Cant open file \n");
        return 1;
    }

    printf("Enter text into file: \n");
    while(1){
        fgets(line, sizeof(line), stdin);
        if(strcmp(line, "\n") == 0){
            break;
        }
        fputs(line, fp);
    }

    fclose(fp);
    return 0;
}