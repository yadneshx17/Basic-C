#include <stdio.h>
int gcdFind(int a, int b) {
    int temp;
    while(b!=0) {
        temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int main () {
    int n1, n2, gcd, lcm;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    gcd = gcdFind(n1, n2);

    lcm = (n1 * n2)  / gcd;

    printf("Gcd and Lcm is:> %d and %d ", gcd, lcm);
}