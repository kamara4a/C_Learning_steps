#include <stdio.h>

int main(){
    int num[3][3];

    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            num[i][j] = (i+1)*(j+2);
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    return 0;
}