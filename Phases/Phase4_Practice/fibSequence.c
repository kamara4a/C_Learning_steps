#include <stdio.h>

// Recursive function to return nth Fibonacci number
int fib(int n) {
    if (n == 0)
        return 0;   // base case
    else if (n == 1)
        return 1;   // base case
    else
        return fib(n-1) + fib(n-2);  // recursive case
}

int main() {
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }

    return 0;
}
