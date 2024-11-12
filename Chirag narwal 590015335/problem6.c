#include <stdio.h>
#include <stdbool.h>

// Function to narrow down the number possibilities
int narrowDown(int n) {
    if (n <= 1) return 0; // Not prime
    if (n <= 3) return n; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return 0; // Not prime if divisible by 2 or 3
    return n;
}

// Function to check if a number is prime using switch statement
bool isPrime(int n) {
    n = narrowDown(n);
    switch (n) {
        case 0:
            return false;
        case 2:
        case 3:
            return true;
        default:
            for (int i = 5; i * i <= n; i += 6) {
                switch (0) {
                    case 0:
                        if (n % i == 0 || n % (i + 2) == 0) return false;
                }
            }
            return true;
    }
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
