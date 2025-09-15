#include <stdio.h>

int main(){
    int arr[] = {1,2,4};

    printf("%d", *arr);  //accessing first element... ie; arr[0]
    printf("%d", *(arr+1)); //accessing next element... arr[1]

    return 0;
}