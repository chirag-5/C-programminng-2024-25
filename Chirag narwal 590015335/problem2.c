#include <stdio.h>

const char* decision_tree(int input_value) {
    return (input_value == 1) ? "Outcome 1" :
           (input_value == 2) ? "Outcome 2" :
           (input_value == 3) ? "Outcome 3" :
           (input_value == 4) ? "Outcome 4" :
           (input_value == 5) ? "Outcome 5" :
           (input_value == 6) ? "Outcome 6" :
           (input_value == 7) ? "Outcome 7" :
           (input_value == 8) ? "Outcome 8" :
           (input_value == 9) ? "Outcome 9" :
           (input_value == 10) ? "Outcome 10" :
           "Unknown Outcome";
}

int main() {
    int user_input;
    printf("Enter a number between 1 and 10: ");
    scanf("%d", &user_input);

    const char* result = decision_tree(user_input);
    printf("The result is: %s\n", result);

    return 0;
}
