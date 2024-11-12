#include <stdio.h>

void compound_calculator(int num1, int num2, char operator) {
    int result = num1;

    switch (operator) {
        case '+':
            result += num2;  
            break;
        case '-':
            result -= num2;  
            break;
        case '*':
            result *= num2;  
            break;
        case '/':
            if (num2 != 0) {
                result /= num2;  
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return;
            }
            break;
        case '%':
            if (num2 != 0) {
                result %= num2;  // Modulus using compound assignment
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
                return;
            }
            break;
        case '&':
            result &= num2;  
            break;
        case '|':
            result |= num2;  
            break;
        case '^':
            result ^= num2;  
            break;
        case '<':  // Left shift
            result <<= num2;  
            break;
        case '>':  // Right shift
            result >>= num2;  
            break;
        default:
            printf("Error: Invalid operator.\n");
            return;
    }

    printf("Result: %d\n", result);
}

int main() {
    int num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /, %%, &, |, ^, <, >): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%d", &num2);

    compound_calculator(num1, num2, operator);

    return 0;
}
