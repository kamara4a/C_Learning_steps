#include <stdio.h>

int main() {
    int count = 10;

    for(int i = 0; i<10; i++) {
        for(int j= 0; j<count; j++) {
            printf("*");
        }
        printf("\n");
        count--;
        
        int val = 10-count;
        for(int j=0; j<=val;j++) {
            printf(" ");
        }
    }
}