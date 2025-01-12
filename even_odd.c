#include <stdio.h>
int main() {
    int num;
    printf("enter number:> ");
    scanf("%d", &num);
    if(num % 2 ==  0) {
        printf("%d is a even Number", num);
    } else {
        printf("%d is a odd Number",num);        
    }
}