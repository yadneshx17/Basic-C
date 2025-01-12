#include <stdio.h> 

int main () {
   int base, height, area;

   printf("Enter the Height:> ");
   scanf("%d", &height); 
   printf("Enter the base:> ");
   scanf("%d", &base);

   area =  base * height / 2;
   printf("Area of the Triangle is %d", area);
}  
