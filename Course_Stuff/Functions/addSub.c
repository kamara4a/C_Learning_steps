#include <stdio.h>

int add (int a, int b) {
    return a + b;
}

int sub (int a, int b) {
    if(a>b)
        return a - b;
    else
        return b - a;
}

int main() {
    int a, b, val;

    printf("Enter a value: \n");
    scanf("%d", &a);

    printf("Enter a value: \n");
    scanf("%d", &b);

    val = add(a,b);
    printf("The sum of values: %d + %d = %d \n", a, b, val);

    val = sub(a,b);
    if(a>b)
        printf("The difference between %d and %d is: %d \n", a, b, val);
    else
        printf("The difference between %d and %d is: %d \n", b, a, val);

    return 0;
}