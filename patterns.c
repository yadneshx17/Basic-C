#include <stdio.h>

int main() {
    int n = 6;
    
    for(int row=0; row<=n; row++) {
        for(int col=0; col<=row; col++) {
            printf("%d", col);
        }
        printf("\n");
    }
}