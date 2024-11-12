#include <stdio.h>

void printMultiplicationTable(int num) {
    int result;
    for (int i = 1; i <= 10; i++) {
        result = 0;
        for (int j = 0; j < i; j++) {
            result += num;
        }
        printf("%d x %d = %d\n", num, i, result);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printMultiplicationTable(num);

    return 0;
}
