#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    FILE *fp = fopen("data.txt", "r");
    char line[100];

    while(fgets(line, sizeof(line), fp))  //reads each line of the file
        printf("%s", line);

    fclose(fp);
    return 0;
}