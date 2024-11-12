#include <stdio.h>

void printPyramid(int height, char symbol) {
    for (int i = 1; i <= height; i++) {
        // Print leading spaces
        for (int j = i; j < height; j++) {
            printf(" ");
        }
        // Print symbols
        for (int k = 1; k <= (2 * i - 1); k++) {
            if (k == 2) continue; // Example of using continue
            printf("%c", symbol);
        }
        printf("\n");
        if (i == height / 2) break; // Example of using break
    }
}

int main() {
    int height;
    char symbol;
    printf("Enter the height of the pyramid: ");
    scanf("%d", &height);
    printf("Enter the character symbol for the pyramid: ");
    scanf(" %c", &symbol);

    printPyramid(height, symbol);

    return 0;
}
