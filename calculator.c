#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

    printf("Enter and Operator (+, -, *, /):> ");
    scanf("%c", &operator);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid operator.\n");
    }
    return 0;
}