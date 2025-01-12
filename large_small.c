#include <stdio.h>
int main() {
    int num1;
    int num2; 
    int num3;

    printf("Enter the first number:> \n");
    scanf("%d", &num1);
    printf("Enter the Second number:> \n");
    scanf("%d", &num2);
    printf("Enter the Third number:> \n");
    scanf("%d", &num3);

    int large = 0;
    int small = 0;

    if(num1>=num2 && num1>=num3) {
        large = num1;
    } else if (num2>=num1 && num2>= num3) {
        large = num2;
    } else {
        small = num3;
    }

    printf("Largest Number is %d\n", large);

    if(num1<=num2 && num1<=num3) {
        small = num1;
    } else if (num2<=num1 && num2<= num3) {
        small = num2;
    } else {
        small = num3;
    }

    printf("Smallest Number is %d", small);


}
