#include <stdio.h>

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci series up to %d: %d, %d", n, first, second);

    for (int i = 2; i <= n; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Enter a non-negative number.");
        return 1;
    }

    generateFibonacci(n);

    return 0;
}
