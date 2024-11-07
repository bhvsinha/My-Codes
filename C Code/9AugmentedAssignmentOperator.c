#include<stdio.h>
int main() {
  int x = 10;
  x += 2;
  printf("%d\n",x);
  
  int y = 10;
  y -= 3;
  printf("%d\n",y);
  
  int z = 10;
  z *= 4;
  printf("%d\n",z);

  int i = 10;
  i /= 5;
  printf("%d\n",i);

  float j = 10;
  int k = 3;
  j /= (float) k;
  printf("%f\n",j);

  int l = 10;
  l %= 7;
  printf("%d",l);
 
return 0;
}
