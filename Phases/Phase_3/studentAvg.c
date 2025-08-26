#include <stdio.h>

int main(){
    int grades[5];
    double sum = 0;
    double avg;

    for(int i = 0; i<5; i++){
        printf("Enter student %d grades: ", i+1);
        scanf("%d", &grades[i]);

        sum = sum + grades[i];
    }

    avg = sum/5.0;
    printf("The class average is: %d", avg);

    return 0;
}