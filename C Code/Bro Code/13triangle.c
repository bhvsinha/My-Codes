#include<stdio.h>
#include<math.h>
int main() {
  float hypotnenuse, base , perpenticular;
  printf("enter the base of triangle: \n");
  scanf("%f",&base);
  printf("enter the perpenticular of triangle: \n");
  scanf("%f",&perpenticular);
  hypotnenuse = sqrt(base*base + perpenticular*perpenticular);
  printf("hypotnenuse= %f",hypotnenuse);   //gcc 13triangle.c -lm
  return 0;
}
