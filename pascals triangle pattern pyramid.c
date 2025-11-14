#include <stdio.h>

// Function to calculate factorial
long long factorial(int n) {
    long long fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

// Function to calculate nCr
long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        // Print leading spaces
        for(j = 0; j < n - i - 1; j++) {
            printf("  ");  // 2 spaces for alignment
        }

        // Print numbers
        for(j = 0; j <= i; j++) {
            printf("%4lld", nCr(i, j));  // 4 spaces for proper alignment
        }
        printf("\n");
    }

    return 0;
}

