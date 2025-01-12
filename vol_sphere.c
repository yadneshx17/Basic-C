#include <stdio.h>
int main() {
    int r;
    float vol;

    printf("enter radius:> ");
    scanf("%d", &r);

    vol = (4.0 / 3.0) * 3.14 * r * r * r;
    printf("vol of spehere: %.2f", vol);
}
