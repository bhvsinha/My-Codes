#include<stdio.h>

int main() 
{
  int x = 6;  // 6 =  00000110
  int y = 12; // 12 = 00001100
  int z = 0;  // 0 =  00000000
  
  z = x&y;                  //6&12 = 00000100 = 4
  printf("And: %d\n",z);
  
  z = x|y;                  //6|12 = 00001110 = 14
  printf("Or: %d\n",z);
  
  z = x^y;                  //6^12 = 00001010 = 10
  printf("Xor: %d\n",z);
  
  z = x << 1;               //6<<1 = 00001100 = 12
  printf("Leftshift 1: %d\n",z);

  z = x << 2;               //6<<2 = 00011000 = 24
  printf("Leftshift 2: %d\n",z);
  
  z = y >> 1;               //12>>1= 00000110 = 6
  printf("Rightshift 1: %d\n",z);

  z = y >> 2;               //12>>2= 00000011 = 3
  printf("Rightshift 2: %d\n",z);

}
