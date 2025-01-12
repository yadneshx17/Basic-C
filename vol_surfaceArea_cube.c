#include <stdio.h>

void main() {
    float side, volume, surfaceArea;

    // Input the side length of the cube
    printf("Enter the side length of the cube: ");
    scanf("%f", &side);
    
    volume = side * side * side;
    surfaceArea = 6 * (side * side);

    printf("Volume %f \n", volume);
    printf("surfaceArea %f", surfaceArea);
}