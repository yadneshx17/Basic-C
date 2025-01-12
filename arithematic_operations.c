#include <stdio.h>
int main() {
    float num1;
    float num2;
    float sum;

    printf("Enter the First Number:> \n");
    scanf("%f", &num1);
    printf("Enter the Second Number:> \n");
    scanf("%f", &num2);

    sum = num1 + num2;

    printf("The Sum of the two Numbers is :>> %.2f", sum);
}