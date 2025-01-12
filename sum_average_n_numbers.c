#include <stdio.h>

int main() {
    int N;
    int sum=0, num, average;

    printf("Enter the Number of elements:> ");
    scanf("%d", &N);

    for(int i = 1; i<=N; i++) {
        printf("Enter %d Number:> \n", i);
        scanf("%d", &num);
        sum +=num;
    }
    average = sum/N;       
    printf("the Average of %d numbers is:> %d", N, average);
}