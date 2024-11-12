#include <stdio.h>
#include <stdbool.h>

// Function to check if a number is prime
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Function to categorize a number
void categorizeNumber(int n) {
    if (n > 0) {
        printf("%d is positive, ", n);
    } else if (n < 0) {
        printf("%d is negative, ", n);
    } else {
        printf("%d is zero, ", n);
    }

    if (n % 2 == 0) {
        printf("even, ");
    } else {
        printf("odd, ");
    }

    if (isPrime(n)) {
        printf("and prime.\n");
    } else {
        printf("and not prime.\n");
    }

    if (n % 3 == 0) {
        printf("%d is divisible by 3.\n", n);
    }
    if (n % 5 == 0) {
        printf("%d is divisible by 5.\n", n);
    }
    if (n % 7 == 0) {
        printf("%d is divisible by 7.\n", n);
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int numbers[n];
    printf("Enter the numbers:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    for (i = 0; i < n; i++) {
        categorizeNumber(numbers[i]);
    }

    return 0;
}
