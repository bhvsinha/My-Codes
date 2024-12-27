#include<stdio.h>
int main() {
  int x = 5;
  int y = 2;

  int add = x + y;
  int subtract = x-y;
  int multiply = x * y;
  int divide1 = x / y;
  float divide2 = x / y;
  float divide3 = x / (float) y;
  int remainder = x % y;
  printf(" add=%d\n subtract=%d\n multiply=%d\n divide1=%d\n divide2=%f\n divide3=%f\n remainder=%d\n",add,subtract,multiply,divide1,divide2,divide3,remainder);
  x++;
  y--;
  printf(" %d\t%d\n",x,y);
  return 0;
}
