#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to generate the next prime number
int nextPrime(int current) {
    int next = current + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

// Function to generate a spiral matrix
void generateSpiralMatrix(int N) {
    int matrix[N][N];
    int num = 1;
    int prime = 2;
    int x = N / 2, y = N / 2;
    int dx = 0, dy = -1;

    for (int i = 0; i < N * N; i++) {
        if ((-N / 2 < x && x <= N / 2) && (-N / 2 < y && y <= N / 2)) {
            matrix[x + N / 2][y + N / 2] = prime;
            prime = nextPrime(prime);
        }
        if (x == y || (x < 0 && x == -y) || (x > 0 && x == 1 - y)) {
            int temp = dx;
            dx = -dy;
            dy = temp;
        }
        x += dx;
        y += dy;
    }

    // Print the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%4d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int N;
    printf("Enter the size of the spiral matrix (odd number): ");
    scanf("%d", &N);

    if (N % 2 == 0) {
        printf("Error: Please enter an odd number.\n");
        return 1;
    }

    generateSpiralMatrix(N);

    return 0;
}
