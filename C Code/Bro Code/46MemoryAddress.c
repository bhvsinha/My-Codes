#include<stdio.h>

int main()
{
  char a = 'X';
  short b = 'Y';
  int c = 'Z';
  char d;
  char e[2];


  printf("%d bytes\n", sizeof(a));
  printf("%d bytes\n", sizeof(b));
  printf("%d bytes\n", sizeof(c));
  printf("%d bytes\n", sizeof(d));
  printf("%d bytes\n", sizeof(e));
  
  printf("%p\n",&a);
  printf("%p\n",&b);
  printf("%p\n",&c);
  printf("%p\n",&d);
  printf("%p\n",&e);

}
