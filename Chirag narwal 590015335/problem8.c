#include <stdio.h>
#include <limits.h>

// Function to calculate factorial using a for loop
unsigned long long factorialForLoop(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        if (result > ULLONG_MAX / i) {
            printf("Error: Integer overflow detected.\n");
            return 0;
        }
        result *= i;
    }
    return result;
}

// Function to calculate factorial using a while loop
unsigned long long factorialWhileLoop(int n) {
    unsigned long long result = 1;
    int i = 1;
    while (i <= n) {
        if (result > ULLONG_MAX / i) {
            printf("Error: Integer overflow detected.\n");
            return 0;
        }
        result *= i;
        i++;
    }
    return result;
}

// Function to calculate factorial using a do-while loop
unsigned long long factorialDoWhileLoop(int n) {
    unsigned long long result = 1;
    int i = 1;
    do {
        if (result > ULLONG_MAX / i) {
            printf("Error: Integer overflow detected.\n");
            return 0;
        }
        result *= i;
        i++;
    } while (i <= n);
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Factorial of a negative number is undefined.\n");
        return 1;
    }

    printf("Factorial of %d using for loop: %llu\n", num, factorialForLoop(num));
    printf("Factorial of %d using while loop: %llu\n", num, factorialWhileLoop(num));
    printf("Factorial of %d using do-while loop: %llu\n", num, factorialDoWhileLoop(num));

    return 0;
}
