#include<stdio.h>
int main() {
 float item1 = 5.75;
 float item2 = 10.00;
 float item3 = 100.09;
 
 printf("Item 1: $%8.2f\n",item1);   // 8 spaces to left and show 2 decimal points
 printf("Item 2: $%-8.0f\n",item2);  // 8 spaces to right and show 0 decimal points 
 printf("Item 3: $%16.3f\n",item3);  // 16 spaces to left and show 3 decimal points
return 0;
}
