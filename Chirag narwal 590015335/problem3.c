#include <stdio.h>
#include <stdbool.h>


bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}


int countOneBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is a power of 2
    if (isPowerOfTwo(num)) {
        printf("%d is a power of 2.\n", num);
    } else {
        printf("%d is not a power of 2.\n", num);
    }

    // Count the number of 1-bits
    int oneBits = countOneBits(num);
    printf("The number of 1-bits in %d is %d.\n", num, oneBits);

    return 0;
}
